#include<iostream>
using namespace std;


// code by apna collage 

    bool isFreqSame(int a[], int b[]){
	     for(int i=0; i<26 ; i++){
	     	if(a[i] != b[i]){
	     		return false;
			 }
		 }
		 return true;
} 

  bool Permutation_in_String(string s1, string s2){
	  int freq[26] = {0};
	  
	  for(int i=0; i<s1.length(); i++){
		  freq[s1[i] - 'a']++;	  	
	  } 
	  
	  int windSize = s1.length();
	  
	  for(int i=0; i<s2.length(); i++){
	  	 int windIdx = 0, idx=i;
	  	 int windFreq[26] = {0};
	  	 
	  	 while(windIdx < windSize && idx <s2.length() ){
	  	 	windFreq[s2[idx] - 'a']++;
	  	 	windIdx++ ;
	  	 	idx++;
		 }
		 
		 if(isFreqSame(freq, windFreq) ){
		 	return true;
		 }
	  }
	  return false;
	  }

int main(){
	
	string s1 = {"ab"};
	string s2 = {"eidbaooo"};
	
	cout<<Permutation_in_String(s1, s2)<<endl;
	
	return 0;
}
/*

// code by love babbar

class Solution {
public:

    bool checkEqual(int a[26], int b[26]){
        for(int i = 0; i < 26; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length())
            return false;

        int count1[26] = {0};
        
        // Count frequency of s1
        for(int i = 0; i < s1.length(); i++){
            count1[s1[i] - 'a']++;
        }

        int windowSize = s1.length();
        int count2[26] = {0};
        int i = 0;

        // First window
        while(i < windowSize){
            count2[s2[i] - 'a']++;
            i++;
        }

        if(checkEqual(count1, count2))
            return true;

        // Sliding window
        while(i < s2.length()){
            count2[s2[i] - 'a']++;                    // add new char
            count2[s2[i - windowSize] - 'a']--;      // remove old char
            i++;

            if(checkEqual(count1, count2))
                return true;
        }

        return false;   // ? correct return
    }
};

*/
