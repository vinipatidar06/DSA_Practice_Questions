#include<iostream>
using namespace std;
 
 // check the no. is power of 2 or not 
  bool Power(int N){
          if (N < 1) return false;
      int P = 1;
     while(P <= N){
      P = P * 2 ;
      if(P == N){
          return true;
      }
     }
     return false;
}

 int main(){
     int N;
     cout<<"Enter the No. :";
     cin>>N;
     if (Power(N)) {
        cout << N << " is a power of 2." << endl;
    } else {
        cout << N << " is NOT a power of 2." << endl;
    }
 }