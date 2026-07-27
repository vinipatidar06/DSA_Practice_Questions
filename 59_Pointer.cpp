#include<iostream>
using namespace std;

   int main(){
   	
   	int i = 3;
   	int *t = &i;
   	
   	*t = *t +1;
   	cout<<"before :"<<t<<endl;
   	t = t + 1;
   	cout<<"after :"<<t<<endl;
   	
   	
   	/*
   	int num = 5;
   	int a = num;
   	a++;
   	cout<<"num : "<<num<<endl;
   	
   	int *p = &num;
   	cout<<"before: "<<num<<endl;
   	(*p)++;
   	cout<<"after : "<<num<<endl;
   	
   	//copying of pointer
   	int *q = p;
   	cout<< p <<" - "<< q <<endl;
   	cout<< *p <<" - "<< *q <<endl;
   	
   	
   	int i=5;
   	int *q = &i;
   	cout<<"q: "<<q<<endl;
   	cout<<"*q: "<<*q<<endl;
   	
   	int *p = 0;
   	p = &i;
   	cout<<"p: "<<p<<endl;
   	cout<<"*p: "<<*p<<endl;

   	//null pointer
   	int *p=0;
   	cout<<"pointer: "<<p<<endl;
   	  int num = 5;
   	  
   	  cout<<num<<endl;
   	  
   	  //address of Operator
   	  cout<<"address of num is : "<<&num<<endl;
   	  
   	  int *ptr = &num;
   	  cout<<"value is :"<<ptr<<endl;
   	  cout<<"value is :"<<*ptr<<endl;
   	  
   	  cout<<"Size of num: "<<sizeof(num)<<endl;
   	  cout<<"Size of ptr: "<<sizeof(ptr)<<endl;
   */
    
    return 0;
   }
