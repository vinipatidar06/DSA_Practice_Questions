#include<iostream>
using namespace std;

void Swap_Alternate(int N[], int S){
     for(int i = 0; i<6 ;i=i+2){
          if(i+1 < S){
          swap(N[i],N[i+1]);
          }
            }
}

void Print_Array(int N[],int S){
     cout<<("Your Alternate Array are :");
     for(int i = 0; i<6 ;i=i+1){
         cout<<(N[i])<<" ";
}
}

void Array(int N[],int S){
    cout<<("Your Original Array are : ");
     for(int i = 0; i<6 ;i=i+1){
         cout<<(N[i])<<" ";
   }
   cout<<endl;
}
 
 int main(){
        int N[6] ={4,12,8,10,20,40};
        
        Array(N,6);
        Swap_Alternate(N,6);
        Print_Array(N,6);
        
     return 0;
     }
