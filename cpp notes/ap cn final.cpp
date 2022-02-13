#include<iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int n = 1;
    
    int current = 1;
    while( n <= x){
    	int term = 3*current+2;
    	if(term % 4 != 0){
    		cout<<term<<" ";
    		n++;
		}
		current++;
	}
}
