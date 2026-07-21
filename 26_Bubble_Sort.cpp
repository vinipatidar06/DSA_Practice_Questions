#include<iostream>
using namespace std;
  
  void Bubble_Sort(int arr[] , int s){
  	  for(int i=1; i<s; i=i+1){
  	  	for(int j=0; j<s-i; j=j+1){
  	  	  if(arr[j] > arr[j+1]){
  	  		swap(arr[j],arr[j+1]);
		  }
        }
      }   
	  for(int i=0; i<s; i=i+1){
	  	cout<<arr[i];
	  }
  }
 int main(){
      int arr[6] = {4,2,7,5,1,6};
	  cout<<"The Sorted elements of array by sorting Bubble sort:";
	  Bubble_Sort(arr, 6);	
 	
 return 0;	
}
