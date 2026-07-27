#include<iostream>
using namespace std;

void stored_arr(int arr[][3]){
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i <3; i++){
      for(int j = 0; j < 3; j++){
        cin >> arr[i][j];
      }
    }

    cout << "Entered array is: ";
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        cout << arr[i][j] << " ";
      }
    }
    cout << endl;
}

   bool Binary_Search(int arr[3][3], int target){
      
	   int row = 3;
	   int col = 3;
	   
	   int start = 0;
	   int end = row*col-1;
	   
	   int mid = start + (end-start)/2;
	   
	   while(start<=end){
	   	
	     int element = arr[mid/col][mid%col];
	     
	     if(element == target){
	     	return 1;
		 }
		 
		 if(element < target){
		 	start = mid+1;
		 }
	     else{
	     	end = mid-1;
		 }
	    mid = start + (end-start)/2;
	   }
	   return false;
   }


int main(){
    int arr[3][3], key;

    stored_arr(arr);

    cout << "Enter the search key: ";
    cin >> key;

    if(Binary_Search(arr, key)){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element Not Found" << endl;
    }

    return 0;
}
