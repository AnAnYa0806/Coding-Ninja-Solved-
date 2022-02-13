#include<iostream>
using namespace std;
int main(){

     int n;
     cin>>n;
    int i = 1; int starcount =0;
    while(i <= n){
        int j = 1;
        while(j <= n - i + 1 ){
        cout<<j;	
           j++ ;   
    }
        int val = 1;
        while(val <= starcount ) {
		cout<<"*";
		val++;
	}
		j = n - i +1;
		while( j >= 1){
			cout<<j;
			j--;
		}
		
			 cout<<endl;
             i++;  
             starcount += 2;
        

 }
        
    }
    
  // Write your code here

