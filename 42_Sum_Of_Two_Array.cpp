#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> addArrays(vector<int>& a, vector<int>& b) {
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    vector<int> ans;

    while (i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    while (carry != 0) {
        ans.push_back(carry % 10);
        carry /= 10;
    }
    //ye vala function nhi defind kiya h kyuki <algorithm> ki header use kri h STL ke through
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> a = {1, 2, 3, 4};  // 1234
    vector<int> b = {9, 9, 9};     // 999

    vector<int> result = addArrays(a, b);

    for (int x : result)
        cout << x << " ";

    return 0;
}

