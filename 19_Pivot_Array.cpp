#include<iostream>
using namespace std;

int Pivot_Element(int arr[], int S){
    	int s = 0;
    	int e = S-1;
    	int mid = s + (e-s)/2;
    	
    	while(s<e){
    		
    		if(arr[mid] >= arr[0]){
    			s = mid+1;
			}
			else{
				e = mid;
			}
		    mid = s+ (e-s)/2;
		}
		return e;
	}


void stored_arr(int arr[], int S){
    cout << "Enter the elements of the array:";
    for(int i = 0; i < S; i++){
        cin >> arr[i];
    }

    cout << "Entered array is: ";
    for(int i = 0; i < S; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
    
	
	 int main(){
     	int S;
    cout << "Enter the size of the array: ";
    cin >> S;
    
	int arr[S];
    stored_arr(arr, S);
	
	cout<<"The Index of Pivot Element is :"<<Pivot_Element(arr, S)<<endl;

     	return 0;
	 }
	 
