#include<iostream>
using namespace std;


 int main() {
 	char n;
 	n = cin.get();
 	int digits = 0, characters = 0, space = 0;
 		while(n != '$'){
            if(islower(n)){
                characters++;}
                else if(n >= '0' && n <= '9'){
                    digits++;}
                    else if( n == ' ' || n == '\t' || n == '\n') {
						space++;
                    }
 			n = cin.get();
        }
	 
 	 cout<< characters <<" "<< digits <<" "<< space; 
 	
}
