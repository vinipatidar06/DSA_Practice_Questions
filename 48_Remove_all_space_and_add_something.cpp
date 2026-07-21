#include<iostream>
using namespace std;

// with temp variable
/*
  string Replace_Space_From_String(string str){
  	 string temp = "";
  	 
  	for(int i=0; i<str.length();i++){
  		if(str[i] == ' '){
  			temp.push_back('@');
  			temp.push_back('4');
  			temp.push_back('0');
		  }
	    else{
	  	    temp.push_back(str[i]);
	  }
    }
     return temp;
  }
*/

// without temp variable
string Replace_Space_From_String(string str){
	
  	for(int i=0; i<str.length();i++){
  		if(str[i] == ' '){
  		  str.replace(i,1,"@40");
		  }
    }
     return str;
  }
  
int main(){
	
	string s;
	cout<<"Enter string:";
	getline(cin, s);
	cout<<Replace_Space_From_String(s)<<endl;
	
	return 0;
}
