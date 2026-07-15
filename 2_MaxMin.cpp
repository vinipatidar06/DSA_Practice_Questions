#include<iostream>
using namespace std;

Enter_ArrayValue(int Arr[] , int S){
	cout<<"Enter the Value of an Array:";
	for(int i = 0; i<S; i=i+1){
		cin>>Arr[i];
		cout<<"\n";
	}
} 

Max_Min(int Arr[] , int S){
	int Max,Min;
	Max = Arr[0];
	Min = Arr[0];
	
	for(int i = 1; i<S; i=i+1){
		if(Arr[i] >= Max){
			Max = Arr[i];
		}
		if(Arr[i] <= Min){
			Min = Arr[i];
		}
	}
	cout<<"Maximum Value is: "<<Max;
	cout<<"\nMinimum Value is: "<<Min;
	
}
int main(){
	int Max,Min;
	int S;
	cout<<"Enter the Size of an Array:";
	cin>>S;
	int Arr[S];
	
	Enter_ArrayValue(Arr , S);
	Max_Min(Arr , S);
	
	return 0;
}
