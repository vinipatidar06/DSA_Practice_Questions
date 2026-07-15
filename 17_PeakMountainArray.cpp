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

// finding Peak index of Mountain Array 
int PeakValueOfMountainArray(int arr[], int S){
    int start = 0;
    int end = S - 1;

    while(start < end){
        int mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;  
}

int main(){
    int S;
    cout << "Enter the size of the array: ";
    cin >> S;

    int arr[S];
    stored_arr(arr, S);

    int peakIndex = PeakValueOfMountainArray(arr, S);
    cout << "Peak value of Mountain Array is: " << arr[peakIndex] << endl;

    return 0;
}
