#include<iostream>
using namespace std;

  bool Search_Matrix(int arr[][4], int target){
  	int row = 3;
  	int col = 4;
  	
  	int rowIndex = 0;
  	int colIndex = col-1;
  	
  	while(rowIndex < row && colIndex >= 0){
  	    int element = arr[rowIndex][colIndex];
		  
		if(element == target){
			return 1;
		}
		if(element < target){
			rowIndex++;
		}
		else{
			colIndex--;
		}
	}
	   return false; 
  }

int main(){
	
	 int arr[3][4] = {1,4,7,11,2,5,8,12,3,6,9,16};
	 int key;

    cout << "Enter the search key: ";
    cin >> key;

    if(Search_Matrix(arr, key)){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element Not Found" << endl;
    }

	return 0;
}
