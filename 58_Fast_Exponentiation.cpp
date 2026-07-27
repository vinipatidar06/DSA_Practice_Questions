#include<iostream>
using namespace std;

  int Fast_Exponentiation(int x, int y, int mod) {
    
    int result = 1;
    x = x % mod;

    while(y > 0) {
        
        if(y & 1) {
            result = (result * x) % mod;
        }

        x = (x * x) % mod;
        y = y >> 1;
    }

    return result;
}

int main() {
    
    int mod = 1000000007;
    cout << Fast_Exponentiation(2, 10, mod);

    return 0;
}
