/*
#include<iostream>
using namespace std;

   void Merge(int arr1[], int n, int arr2[] , int m, int arr3[]){
       int k=0;
	   int i=0;  
	   int j=0;  
	  		
	  	while(i<n && j<m){
			if(arr1[i] < arr2[j]){
	  			arr3[k] = arr1[i]; 
	  			k++;
	  			i++;
			}
			else {
			    arr3[k] = arr2[j];
			    k++;
			    j++;
		    }
	  }
	  //copy first array k element
	  while(i<n){
	  	arr3[k] = arr1[i];
	  	k++;
	  	i++;
	  }  
	  
	  //copy kara h second array ke remaining elements ko
	  while(j<m){
	  	arr3[k] = arr2[j];
	  	k++;
	  	j++;
	  }	
   }
   
    void print(int arr3[], int p){
     cout<<"Merge of two sorted array is:";
     for(int i=0; i<p; i++){
     	cout<<arr3[i]<<endl;
	 }
   }

int main(){
	
	int arr1[5] = {1,2,3,4,5};
	int arr2[4] = {6,7,8,9};
	
	int arr3[9] = {0};
	
	Merge(arr1, 5, arr2, 4 , arr3);
	print(arr3 ,9);
	
	
	
	return 0;
}
*/


#include<iostream>
using namespace std;

void Merge(int arr1[], int n, int arr2[], int m) {
    int i = n - 1;      // last element of arr1
    int j = m - 1;      // last element of arr2
    int k = n + m - 1;  // last index of arr1

    while(i >= 0 && j >= 0) {
        if(arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        }
        else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    // copy remaining elements of arr2 (if any)
    while(j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}

void print(int arr1[], int size) {
    cout << "Merge of two sorted arrays:\n";
    for(int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
}

int main() {
    int arr1[6] = {1,2,3,0,0,0};
    int arr2[3] = {4,5,6};

    Merge(arr1, 3, arr2, 3);
    print(arr1, 6);

    return 0;
}

