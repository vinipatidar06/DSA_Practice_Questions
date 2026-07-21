#include<iostream>
using namespace std;

void Selection_Sort(int arr[], int S) {
    for(int i = 0; i < S - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < S; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum with the element at index i
        swap(arr[i], arr[minIndex]);
    }

    // Print the sorted array
    cout << "Your Sorted array is: ";
    for(int i = 0; i < S; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {2, 6, 4, 1, 7, 5};

    Selection_Sort(arr, 6);

    return 0;
}

