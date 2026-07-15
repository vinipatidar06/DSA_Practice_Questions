#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[100]; // Assuming max size 100
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate numbers are: ";
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; // Break to avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}
/*
#include<iostream>
using namespace std;

void Duplicate_no(int N[], int S){
    for(int i = 0; i < S; i++){
        for(int j = i + 1; j < S; j++){
         if(N[i] == N[j]){
         cout << "Duplicate No. is : " << N[i] << endl;
                return;
            }
        }
    }
}

int main(){
    int N[5] = {4, 1, 6, 6, 5};
    Duplicate_no(N, 5);

    return 0;
}


//By XOR Operator//

#include<iostream>
using namespace std;

void Duplicate_no(int N[], int S){
    int i;
    int A=0;
     for(int i = 0; i<S ;i=i+1){
          A = A^N[i];
            }
    for( i = 1; i<S ; i=i+1){
        A=A^i;
    }
    cout<<"Duplicate No. is : "<<A;
}

 int main(){
        int N[5] ={1,2,3,4,3};
        Duplicate_no(N,5);
        
     return 0;
     }
     */

