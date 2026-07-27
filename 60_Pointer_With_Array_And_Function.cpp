#include<iostream>
using namespace std;

    // void print(int *p);	
    // void update(int *p);
    
    // Function to calculate sum using a pointer
   int getSum(int *arr, int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        // arr[i] is internally treated as *(arr + i)
        sum += arr[i]; 
    }
    return sum;
    }  
    
    
   int main(){
   	/*
	  int arr1[10] = {4,7,8,10,12};
	  //type one
	  cout<<"Address of arr:"<<arr1<<endl;
	  cout<<"Address of arr:"<<&arr1[0]<<endl;
	  
	  cout<<"Value at 1st address:"<<*arr1<<endl;
	  
	  cout<<"1st index's value + 1:"<<*arr1 + 1 <<endl;
	  cout<<"1st index's value + 1:"<<(*arr1) + 1<<endl;
	  cout<<"1st index's value + 1:"<<*(arr1) + 1<<endl;
	  cout<<"Value at 2nd address:"<<*(arr1 + 1)<<endl;
	  
	  //type two
	  int arr2[4] = {23,122,41,67};
	  cout<<"3rd index's value:"<<arr2[2] <<endl;
	  cout<<"3rd index's value:"<<*(arr2 + 2) <<endl;
	  
	  //type three
	  int i = 3;
	  cout<<"3rd index value is:"<<i[arr2]<<endl;
	  cout<<endl;
	  
	  */
	  
	  /* //1st difference between size of array and pointer
	  int temp[10] = {1,20};
	  int *ptr = &temp[0];
	  
	  cout<<"size of temp:"<<sizeof(temp)<<endl;//10*4=40
	  cout<<"ptr print size of one block of array:"<<sizeof(ptr)<<endl<<endl;//8
	  
	  cout<<"print the size of 1st value of array::"<<sizeof(*temp)<<endl;//4
	  cout<<"Ptr print the size of 1st value of array:"<<sizeof(*ptr)<<endl<<endl;//4
	  
	  cout<<"print the size of address of 1st index:"<<sizeof(&temp)<<endl;//8
	  cout<<"Ptr print the size of address of 1st index:"<<sizeof(&ptr)<<endl<<endl;//8
	 
	  */
	  
	  /* //2nd difference between & operater of array and pointer
	  int a[20] = {1,2,3,5};
	  
	  //All three print same
	  cout<<"print the address of 0th index of array:"<<&a[0]<<endl;//0x6ffdf0
	  cout<<"print the address of 0th index of array:"<<&a<<endl;//0x6ffdf0
	  cout<<"print the address of 0th index of array:"<<a<<endl<<endl;//0x6ffdf0
	  
	  int *p = &a[0];
	  cout<<"&ptr give the different address of 0th index of array:"<<&p<<endl;//0x6ffe38
	  cout<<"print the value of 0th index of array:"<<*p<<endl;//1
	  cout<<"p give the same address of 0th index of array:"<<p<<endl;//0x6ffdf0
	  
	  */
	 
	  /* 
	  //3rd difference between symbol table of array and pointer
	  int arr[10];
	  //arr = arr+1; //error
	  
	  int *ptr = &arr[0];
	  cout<<"ptr:"<<ptr<<endl;
	  ptr = ptr + 1;
	  cout<<"ptr + 1:"<<ptr + 1<<endl;
	  */ 
	  
	  /*
	  int arr[5] = {10,20,30,40,50};
	  char ch[6] = "abcde";
	  
	  cout<<arr<<endl;//0x6ffe20
	  cout<<ch<<endl;//abcde
	  
	  char *c = &ch[0];//print entire string
	  cout<<c<<endl; //abcde
	  
	  char temp = 'z';
	  char *p = &temp;
	  
	  cout<<p<<endl;//zabcde
	  */
	
	  /*int value = 5;
	  int *p = &value;
	  
      print(p);
      cout<<"before p:"<<p<<endl;
      update(p);
      cout<<"After p:"<<p<<endl;
      */
      
    int arr[6] = {1, 2, 3, 4, 5,6};
    int size = 6;

    cout << "Sum is " << getSum(arr, size) << endl;

    // Interesting benefit: You can pass a specific part of the array
    // This will calculate sum from the 3rd element onwards (3+4+5 = 12)
    cout << "Sum of part of array: " << getSum(arr + 2, 3) << endl;
	  return 0;
}
	
	/* 
	void print(int *p){
	   cout<<p<<endl;  //0x6eff44
	   cout<<*p<<endl;  //5
	}
	void update(int *p){
	    //p = p + 1;
		//cout<<"inside p:"<<p<<endl;
		*p = *p + 1;
		cout<<"inside *p:"<<*p<<endl;
	}
	*/
