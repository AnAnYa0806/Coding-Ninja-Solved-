#include<iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int n;
    int terms;
    
    for(n = 1; n <= x; n++){
      terms = 3*n+2;
        if(terms % 4 != 0){
            cout<<terms<<" ";
            
        }
    }
    
	// Write your code here
	
}
