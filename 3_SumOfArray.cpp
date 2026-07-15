#include<iostream>
using namespace std;
 
 int main(){
        int N[5] ={4,12,8,10};
       int S = 0;
      for(int i = 0; i<4 ;i=i+1){
          S = S+N[i];
            }
        cout<<"Sum of all the elements of an array:"<<S<<endl;
     return 0;
     }
