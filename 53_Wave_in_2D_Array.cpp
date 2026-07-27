#include<iostream>
using namespace std;

    void Print_Array(int arr[][3]){
   	  cout<<"your elements in array:"<<endl;
      for(int i=0; i<3 ; i++){
        for(int j=0; j<3 ; j++){
    	   cout<<arr[i][j] << " ";
        }
        cout<<endl;
	  }
    }
    
    void Wave_Array(int arr[][3]){
    cout<<"Wave Print:"<<endl;

    for(int j = 0; j < 3; j++){

        // Even column ? Top to Bottom
        if(j % 2 == 0){
            for(int i = 0; i < 3; i++){
                cout << arr[i][j] << " ";
            }
        }
        // Odd column ? Bottom to Top
        else{
            for(int i = 2; i >= 0; i--){
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
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
    Wave_Array(arr);
 	
	return 0;
}
