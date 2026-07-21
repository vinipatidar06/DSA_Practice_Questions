#include <iostream>
using namespace std;

bool isAlphaNumeric(char ch) {
    if ((ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z') ||
        (ch >= '0' && ch <= '9')) {
        return true;
    }
    return false;
}

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool checkPalindrome(string s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {

        if (!isAlphaNumeric(s[start])) {
            start++;
        }
        else if (!isAlphaNumeric(s[end])) {
            end--;
        }
        else {
            if (toLowerCase(s[start]) != toLowerCase(s[end])) {
                return false;
            }
            start++;
            end--;
        }
    }
    return true;
}

int main() {
    string s;
    cout<<"Enter the String:";
    cin>>s;

    if (checkPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}



/* 
#include<iostream>
using namespace std;

char toLowerCase(char ch){
	if(ch >= 'a' && ch <= 'z'){
		return ch;
	}
    else{
	char temp = ch - 'A' + 'a';
	return temp;
    }
}
int Length_Of_String(char s[]) {
    int l = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        l++;
    }
    return l;
}

    bool Palindrome_String(char s[], int l){
    	int start = 0;
    	int end = l-1;
    	
    	while(start<=end){
    		if( toLowerCase( s[start] ) != toLowerCase( s[end]) ){
    			return 0;
			}
			else {
				
				start++;
				end--;
			}
		}
    	return 1;
	}
int main() {
    char s[10];

    cout <<"Enter your name: ";
    cin >> s;

    int len = Length_Of_String(s);
    cout << "Length of string is: " << len << endl;
   
    cout<<"String is Palindrome:"<<Palindrome_String(s, len);
    return 0;
}
*/
