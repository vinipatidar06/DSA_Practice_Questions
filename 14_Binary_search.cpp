#include<iostream>
using namespace std;

// Function to input and display array
 void stored_arr(int arr[], int S){
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < S; i++){
        cin >> arr[i];
    }

    cout << "Entered array is: ";
    for(int i = 0; i < S; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Binary search function
bool binary_search(int arr[], int S, int key){
    int start = 0;
    int end = S - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            cout << "Key found at index: " << mid << endl;
            return true;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    cout << "Key is not in the array." << endl;
    return false;
}

int main(){
    int S, key;
    cout << "Enter the size of the array: ";
    cin >> S;

    int arr[S];
    stored_arr(arr, S);

    cout << "Enter the search key: ";
    cin >> key;

    binary_search(arr, S, key);

    return 0;
}
