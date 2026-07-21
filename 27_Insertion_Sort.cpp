#include<iostream>
using namespace std;
 
 void Insertion_Sort(int arr[], int S){
 	 for(int i = 1; i < S; i++){
 	 	int temp = arr[i];
 	 	int j = i-1;
 	 	
 	 	for(; j >= 0; j--){
		   if(arr[j] > temp ){
 	 		 arr[j+1] = arr[j];
		   }
		   else {
		   	break;
		   }
	    }
	  arr[j+1] = temp;
    }
	 for(int i = 0; i < S - 1; i++){
	 	cout<<arr[i]<<" ";
	 }
 }
 
   int main(){
   	 int arr[6] = {5,3,1,6,7,4};
   	 cout<<"Sorted by Insertion Sort:";
   	 Insertion_Sort(arr, 6);
   return 0;	
}
