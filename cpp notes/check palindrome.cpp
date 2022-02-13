#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}

int length(char str[]){
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		count++;
	}
	return count;
}


bool checkPalindrome(char str[]) {
    
   int i = 0;
    int n = length(str);
    int j = length(str)-1-i;
    
        while( j > i){
            if(str[i] == str[j]){
                return true;
                i++;
                j--;
            }
            else if( i == j) {
                break;
            }
            else{
                return false;
            }
         
        }
    
    
    // Write your code here
}




alter

for(int i = 0; i <= length(str)/2; i++) {
	if(str[i] != str[length(str) -1 - i]){
		return false;
	}
}
return true;
}




