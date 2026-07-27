#include<iostream>
#include <vector>
using namespace std;

/*
   bool isPrime(int n){

    for (int i = 2; i <= n - 1; i++) {
           if (n % i == 0) {
              return false;
              break; // stop checking further
        }
    }
    return true;
   }

    int Count_Primes(int n) {
      int count = 0;
        for (int i = 2; i <= n - 1; i++) {
           if(isPrime(i)) {
            count++;
             }
        }
        return count;
    }
  */
  
  //sieve of eratosthenes Method
   int Count_Primes(int n){
   	
   	    int count = 0;
   	    vector<bool> prime(n+1, true);
   	    
   	    prime[0] = prime[1] = false;
   	    
   	    for(int i=2; i<n; i++){
   	    	if(prime[i]){
   	    		count++;
   	    		
   	    		for(int j=2*i; j<n; j=j+i){
   	    			prime[j] = 0;
				}
			}
		}
		return count;
   }
    
  int main(){
   	 
   	int n;
   	 
   	cout<<"Enter a no.:";
   	cin>>n;
   	 
   	int result = Count_Primes(n);
    
    cout << "Number of primes less than " << n << " is: " << result;
   	 
   	 return 0;
   }
