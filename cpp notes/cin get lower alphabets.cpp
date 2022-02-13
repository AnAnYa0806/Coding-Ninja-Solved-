
#include<iostream>
using namespace std;
 int main() {
 	char n;
 	n = cin.get();
 	int count = 0;
 	if(islower(n) || n == '$' || n = '0' || n <= 9){
 		while(n != '$'){
 			count++;
 			n = cin.get();
		 }
	 }
 	 cout<< count <<endl;
 	
 }
