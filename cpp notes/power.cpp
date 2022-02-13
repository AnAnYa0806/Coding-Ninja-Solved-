#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll A;
	cin>>A;
	ll B;
	cin>>B;
	ll X;
	cin>>X; ll ans;
	ans = powl(A,B); ll ansc = ans;
	int left = 0, right = 0;  ll l1 = powl(10,X);
	
	right = ans%l1;
	ll digit = 0;
	while(ans){
		++digit;
		ans = ans/10;
	}
    left = ansc/powl(10,digit-X);
    
    
	cout<<left<<" ";
	
	ll digit2 = 0; ll rightc = right;
	while(right){
		++digit2;
		right = right/10;
		
	}
	for(int i = 0; i < X-digit2-1; ++i){
		cout<<"0";
		
	}	
	cout<<rightc;
}
