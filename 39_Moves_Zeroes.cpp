#include<iostream>
using namespace std;

  void Moves_Zeroes(int arr[], int s){
  	
    for(int i=0; i<s-1; i++){
        for(int j = i + 1; j < s; j++) {
            if(arr[i] == 0 && arr[j] !=0) {
                swap(arr[i],arr[j]);
            }
        }
  }
  
  // Print the sorted array
    cout << "Your Sorted array is: ";
    for(int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
	
	int arr[6] = {1,0,2,3,0,0};
	Moves_Zeroes(arr, 6);
	
	return 0;
}
