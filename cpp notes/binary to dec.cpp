#include<iostream>
using namespace std;

int main() {
    int bin;
    cin>>bin;
    int num = 0; 
	int placeval = 1;
    while(bin > 0){
        int lastdig = bin % 10;
        num = num + lastdig*placeval;
        placeval *= 2;
        bin = bin/10;
        
    
            
        }
        cout<<num<<endl;
        
    }
	// Write your 
