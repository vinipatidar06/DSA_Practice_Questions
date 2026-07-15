#include<iostream>
using namespace std;
    void stored_arr(int arr[],int S){
        
        cout<<"Enter the Elements of an array:";
        for(int i = 0; i<S ;i=i+1){
            cin >> arr[i];   
            cout<<endl;
        }
        cout<<"Your Main array: ";
        for(int i = 0; i<S ;i=i+1){
            cout<< arr[i] <<" ";
        }
        cout<<endl;
    }
    /*void reverse_arr(int arr[],int S){
        cout<<"Your Revese Array:";
        for(int i = S-1; i >= 0 ;i=i-1){
            cout << arr[i] <<" ";
        }
    }
    */
    void reverse_arr(int arr[],int S){
    	int start=0;
    	int end=S-1;
    	while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

        cout << "Your Reverse Array: ";
        for(int i = 0; i < S; i++) {
        cout << arr[i] << " ";
    }
	}
 
 int main(){
     
        int S;
      
      cout<<"Enter the Size of an array:"<<endl;
      cin>>S;
      
      int arr[S];
        
      stored_arr(arr , S);
      reverse_arr(arr,S);
     return 0;
     }
     
