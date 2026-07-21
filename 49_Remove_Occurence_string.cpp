#include<iostream>
using namespace std;

 string removeOccurrences(string s, string part) {
        while (s.length() != 0 && s.find(part) < s.length() ){
            s.erase(s.find(part) , part.length() );
        }
        return s;
    }

 int main(){
	
	string s,p;
	cout<<"Enter string:";
	getline(cin, s);
	cout<<"Enter remove part:";
	getline(cin,p);
	cout<<removeOccurrences(s,p)<<endl;
	
	return 0;
}
