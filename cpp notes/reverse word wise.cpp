
void reverse(char input[], int start, int end){             // we first reverse the entire string by swaping every word, then we swap each word within itself individually
    while(start<end)
	{
        std::swap(input[start++], input[end--]);
            
    }
}



void reverseStringWordWise(char input[]) {
      int wordstartindex = -1;              //the place where the word starts
    int j = 0;                                // the place where word end, just before space
    for(; input[j] != '\0'; j++){
     if(input[j] ==' '){
         reverse(input, wordstartindex + 1, j - 1);        
         wordstartindex = j;
     }   
    }
     reverse(input, wordstartindex + 1, j - 1);
     reverse(input, 0, j-1); 
    
    // Write your code here
}


#include <iostream>

using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
