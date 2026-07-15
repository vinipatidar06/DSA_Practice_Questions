#include<iostream>
using namespace std;

bool search(int N[] , int size , int key ){
     for(int i = 0; i<size ;i=i+1){
        if( N[i] == key ){
            return 1;
            int I=i;
        }
        return 0;
            }
    }
 
 int main(){
        int N[7] ={4,12,8,10,3,7,8};
        
        int key,I;

        cout<<"Enter the Search key of an array:"<<endl;
        cin>>key;
        
        bool found = search(N,7,key);
        
        if(found)
        cout<<"Element found at:"<<I<<endl;
        else
        cout<<"Element not found ";
        
     return 0;
     }
     
