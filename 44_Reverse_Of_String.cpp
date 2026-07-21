#include <iostream>
using namespace std;

int Length_Of_String(char s[]) {
    int l = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        l++;
    }
    return l;
}

void Reverse_String(char s[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

int main() {
    char s[10];

    cout << "Enter your name: ";
    cin >> s;

    int len = Length_Of_String(s);
    cout << "Length of string is: " << len << endl;

    Reverse_String(s, len);
    cout << "Reverse of your string is: " << s;

    return 0;
}

