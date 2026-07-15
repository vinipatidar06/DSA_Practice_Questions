#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique numbers are: ";
    for(int i = 0; i < n; i++) {
        bool isUnique = true;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

/*

#include<iostream>
using namespace std;

void Unique_no(int N[], int S){
    int A=0;
     for(int i = 0; i<S;i=i+1){
          A = A^N[i];
            }
    cout<<"Unique No. is : "<<A;
}

 int main(){
        int N[5] ={4,1,6,6,4};
        Unique_no(N,5);
        
     return 0;
     }
     */
