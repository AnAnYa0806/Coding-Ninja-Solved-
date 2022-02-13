#include<iostream>
using namespace std;

void solve(){
	int N;
	cin>>N; int ans = 1;
	for(int i = 1; i <= N; i++){
		ans =  ans*i;
	}
	cout<<ans<<endl;	
}

int main(){
	int T;
	cin>>T;
	while(T--){
		solve();
	}
//	int N; int ans = 1;
//	cin>>N;
//	if( T >= 1&& T <= 10){
//		if( N >= 1 && T <= 10){
//			int i = 1;
//			while(i <= N){
//				ans = ans*i;
//				cout<<ans<<endl;
//				i++;
//				
//			}
//		}
//	}

}

