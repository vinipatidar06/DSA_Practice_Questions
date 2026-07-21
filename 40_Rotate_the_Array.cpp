#include<iostream>
using namespace std;

  void Rotate_Array(int arr[],int n, int k){
	  int temp[n];
	  for(int i=0; i<n; i++){
  		temp[(i+k)%n] = arr[i];
	  }
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
        cout << arr[i] << " ";
    }
}
 int main(){
     int arr[6] = {1,2,3,4,5,6}; 
	 int k;
     int n = 6;
	 
	cout<<"Enter the rotated index number:";
	cin>>k; 	 
	cout<<"\nThe Rotate array is:";
	Rotate_Array(arr,n,k);
	
    return 0;
	 }
