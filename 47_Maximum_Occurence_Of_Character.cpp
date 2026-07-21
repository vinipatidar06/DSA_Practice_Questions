#include<iostream>
using namespace std;

char getMaxOccCharacter(string s) {

    int maxCount = 0;
    char maxChar;

    for(int i = 0; i < s.length(); i++) {

        int count = 0;

        for(int j = 0; j < s.length(); j++) {
            if(s[i] == s[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            maxChar = s[i];
        }
    }

    return maxChar;
}

int main() {

    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << getMaxOccCharacter(s);

    return 0;
}


/*
#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
	int arr[26] = {0};
	
	for(int i=0; i<s.length(); i++){
		char ch = s[i];
		
		int number = 0;
		if(ch >= 'a' && ch <= 'z'){
			number = ch - 'a';
		}
		else{
			number = ch - 'A';
		}
		arr[number]++;
	}
	int maxi = -1 , ans = 0;
	for(int i=0; i<26; i++){
		if(maxi < arr[i]){
			ans = i;
			maxi = arr[i];
		}
	}
	char finalAns = 'a'+ans;
	return finalAns;
}   


int main (){
	
	string s;
	cout<<"Enter string:";
	cin>>s;
	cout<<getMaxOccCharacter(s)<<endl;
	
	return 0;
}
*/
