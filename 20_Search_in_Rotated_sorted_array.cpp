#include<iostream>
using namespace std;

// Find Pivot
int get_Pivot(int arr[], int S){
    int s = 0;
    int e = S - 1;

    while(s < e){
        int mid = s + (e - s) / 2;

        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s; // or e (both same here)
}

// Binary Search (returns index)
int binary_search(int arr[], int s, int e, int key){
    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1; // not found
}

// Search in Rotated Array
 int Target_Array(int arr[], int S, int key){

    int pivot = get_Pivot(arr, S);

    // Search in right part
    if(key >= arr[pivot] && key <= arr[S-1]){
        return binary_search(arr, pivot, S-1, key);
    }
    else{
        return binary_search(arr, 0, pivot-1, key);
    }
}

 int main(){
    int arr[6] = {8,9,10,2,3,4};
    int key = 2;

    int ans = Target_Array(arr, 6, key);

    if(ans != -1){
        cout << "Key found at index: " << ans << endl;
    }
    else{
        cout << "Key not found" << endl;
    }

    return 0;
}
