#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i = 1;
	int val = 1;
	while (i <= n) {
		int k = 1;
		while(k <= n-i) {
			cout<<" ";
			k = k + 1;
		}
		int j = 1;
		int val = i;
		while(j <= i) {
			cout<<val++;
			j = j + 1;
		}
		cout<<endl;
		i = i + 1;
		
		
	}
}
