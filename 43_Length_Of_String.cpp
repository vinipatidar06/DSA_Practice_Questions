#include<iostream>
using namespace std;
 
  void Length_Of_String(char s[]){
  	cout<<"Length of your string is:";
	int l=0;
	for(int i=0; s[i] != '\0'; i++){
		l=l+1;
	}
	cout<<l;
  }
int main(){
	
	char s[10];
	cout<<"Enter your name:";
	cin>>s;
    Length_Of_String(s);
	return 0;
}
