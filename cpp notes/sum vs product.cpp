#include<iostream>
using namespace std;

int main() {
    int N,C;
    cin>>N;
    cin>>C;
    int sum = 0, product = 1;
    while(N >= 1 && N <= 12){
        if(C == 1){
            sum = sum + N;
            N--;
            
        }
        else if(C == 2){
            product = product*N;
            N--;
        }
        else {
            cout<<"-1"<<endl;
            break;
            
        }
    }
    if(C == 1){
    	cout<<sum<<endl;
	}
	if( C == 2){
		cout<<product<<endl;
	}
    
	// Write your code here
	
}

