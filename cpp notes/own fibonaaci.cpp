#include<iostream>
using namespace std;
int bear(int n) {
	
	int i = 0;
	int j = 1;
	int k;
	for(int l = 0; l < n; l++){
		k = i + j;
		i = j;
		j = k;
}
		
		return i;
		
	
}

int main(){
		int n;
	cin>>n;
	cout<<bear(n);
}
