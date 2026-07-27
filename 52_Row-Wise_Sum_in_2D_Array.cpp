#include<iostream>
using namespace std;

 void Column_Wise_Sum(int arr[][3]){
    for(int j=0; j<3 ; j++){
        int sum = 0;
         for(int i=0; i<3 ; i++){
    	 sum = arr[i][j] + sum;
	     }
         cout<<"column-Wise sum is:"<<sum<<endl;
	}
 }
   void Row_Wise_Sum(int arr[][3]){
    	
     for(int i=0; i<3 ; i++){
         int sum = 0;
      for(int j=0; j<3 ; j++){
    	sum = arr[i][j] + sum;
      }
      cout<<"Row-Wise sum is:"<<sum<<endl;
	 }
 }
   
   void Print_Array(int arr[][3]){
   	  cout<<"your elements in array:"<<endl;
      for(int i=0; i<3 ; i++){
        for(int j=0; j<3 ; j++){
    	   cout<<arr[i][j] << " ";
        }
        cout<<endl;
	  }
   }

   int Largest_Row(int arr[][3]){
      int i;
	  int max = INT_MIN;
      int rowIndex = -1;
       for(i=0; i<3 ; i++){
         int sum = 0;
         for(int j=0; j<3 ; j++){
    	 sum = arr[i][j] + sum;
         }
         if(sum>max){
         	max = sum;
         	rowIndex = i;
		 }
	   }
	   
	    cout<<"The Maximum sum of row is:"<<max<<endl;
	    return rowIndex;
   }

int main(){
	int arr[3][3];
   
    cout<<"Enter the elements in array:"<<endl;
    for(int i=0; i<3 ; i++){
      for(int j=0; j<3 ; j++){
    	cin>>arr[i][j];
      }
	}
	
	Print_Array(arr);
    Row_Wise_Sum(arr);
    Column_Wise_Sum(arr);
    int index = Largest_Row(arr);
cout << "Row index with maximum sum is: " << index << endl;
	
	return 0;
}
