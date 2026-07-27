#include<iostream>
using namespace std;

 bool Linear_Search(int arr[][3], int s){
 	for(int i=0; i<3 ; i++){
      for(int j=0; j<3 ; j++){
    	if(s == arr[i][j]){
    		return 1;
		}
      }
	}
	return 0;
 }

 int main(){
	int arr[3][3];
	int s;
   
    cout<<"Enter the elements in array:"<<endl;
    for(int i=0; i<3 ; i++){
      for(int j=0; j<3 ; j++){
    	cin>>arr[i][j];
      }
	}
		
	cout<<"Enter the Search element:";
	cin>>s;
	
    cout<<Linear_Search(arr,s);
	
	return 0;
}
