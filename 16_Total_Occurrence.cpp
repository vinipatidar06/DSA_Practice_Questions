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

//first occurrence
int First_Occurence(int arr[], int S, int key){
    int start = 0;
    int end = S - 1;
    int mid;
    int A = -1;

    while(start <= end){
        mid = start + (end - start)/2;

        if(arr[mid] == key){
            A = mid;
            end = mid - 1; // continue searching in left part
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return A;
}

//  Last occurrence
int Last_Occurence(int arr[], int S, int key){
    int start = 0;
    int end = S - 1;
    int mid;
    int A = -1;
    
    while(start <= end){
        mid = start + (end - start)/2;

        if(arr[mid] == key){
            A = mid;
            start = mid + 1; 
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return A;
}

   //Total_Occurence()

int main(){
    int S, key;
    cout << "Enter the size of the array: ";
    cin >> S;

    int arr[S];
    stored_arr(arr, S);

    cout << "Enter the search key: ";
    cin >> key;

    int M = First_Occurence(arr, S, key);
    int N = Last_Occurence(arr, S, key);

    if(M != -1){
        cout << "First occurrence of " << key << " is at index: " << M << endl; 
    }
    else {
    cout << "Element " << key << " not found in the array." << endl;
        
    }
    if(N != -1){
    cout << "First occurrence of " << key << " is at index: " << N << endl;
    }
    else {
    cout << "Element " << key << " not found in the array." << endl;
    }
    cout<<"Total no. of Occurrence : " << (N - M) + 1;
    return 0;
}
