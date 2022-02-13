#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int newnum = 0;
    int currentnumber = N;
    while(currentnumber > 0){
    int lastdig = currentnumber%10;
        currentnumber = currentnumber/10;
        newnum = newnum*10 + lastdig;
    }
    
     cout<<newnum<<endl;
    
    
	// Write your code here
	
}

