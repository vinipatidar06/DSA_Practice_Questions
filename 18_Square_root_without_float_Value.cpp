#include<iostream>
using namespace std;

int Square_Root(int N){
    int s = 0;
    int e = N;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e) {
        int square = mid * mid;

        if (square == N) {
            return mid; // perfect square root
        }
        if (square < N) {
            ans = mid;
            s = mid + 1;
        } 
		else {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans; // floor of square root
}

int main() {
    int N;

    cout << "We check a given no. is square root of a no. or not" << endl;
    cout << "Enter a Random No.: ";
    cin >> N;

    int result = Square_Root(N);
    if (result * result == N) {
        cout << N << " is the square root of " << result << endl;
    } else {
        cout << N << " is not a perfect square." << endl;
        cout << "But the Approx(floor) value of its square root is: " << result << endl;
    }

    return 0;
}

