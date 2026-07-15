#include<iostream>
using namespace std;

int main() {
    int arr[100], n, target;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    cout << "Pairs with sum " << target << " are: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}
