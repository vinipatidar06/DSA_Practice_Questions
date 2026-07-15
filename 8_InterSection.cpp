#include<iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {3, 4, 5, 3, 7};

    cout << "Intersection elements: ";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}
