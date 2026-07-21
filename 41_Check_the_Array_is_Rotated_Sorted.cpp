#include<iostream>
using namespace std;
 
 bool Check_The_Array_Is_Rotated_Sorted(int arr[],int n){
 	int count = 0;
 	
 	for(int i=1; i<n; i++){
 		if(arr[i-1] > arr[i])
	      count++;
	}
	if(arr[n-1] > arr[0]){
	count++;
    }
    return count <= 1;
 }
 int main(){
     int arr[6] = {4,5,6,1,2,3}; 
     int n = 6;
	
	cout<<"\nCheck_The_Array_Is_Rotated_Sorted:"<<Check_The_Array_Is_Rotated_Sorted(arr, n);
    return 0;
	 }
	 
	 
/* 
int count = 0;
int n = nums.size();

for(int i=1; i<n; i++){
if(nums[i-1] > nums[i]){
count++;
}
}

if(nums[n-1] > nums[0])
count++;
return count <=1;
*/

