#include<iostream>
#include<string>
using namespace std;

/*
int Length_Of_String(string s[]) {
    int l = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        l++;
    }
    return l;
}
*/
void Reverse_String(string &str) {
    int start = 0;

    for (int i = 0; i <= str.size(); i++) {
        
        // Jab space mile ya string end ho
        if (i == str.size() || str[i] == ' ') {
            
            int end = i - 1;
            
            // Reverse current word
            while (start < end) {
                swap(str[start], str[end]);
                start++;
                end--;
            }
             start = i + 1;  // Next word start
        }
    }
}

int main(){
	
	string str = "vini Patidar ";

    /*
	cout << "Enter your name: ";
    cin >> str;
	*/

/*  int len = Length_Of_String(s);
    cout << "Length of string is: " << len << endl;
*/

    Reverse_String(str);
    cout << "Reverse of your string is: " << str;
	
	return 0;
}
