#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int i = 1;
	while(i <= n){
		int spaces = 1;
		while(spaces = n -i){
			cout<<" ";
			int j = 1;
			while(j <= i){
				cout<<j;
				j++;
			}
			
		}
		cout<<endl;
			i++;
	}

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}
