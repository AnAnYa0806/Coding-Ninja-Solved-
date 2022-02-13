#include<iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int n = 1;
    int terms;
    while(n <= x){
      terms = 3*n+2;
        if(terms%4 == 0){
            n++;
        }
        else {
        	cout<<terms<<" ";
        
		}
    }
    
    // Write your code here
	
}
