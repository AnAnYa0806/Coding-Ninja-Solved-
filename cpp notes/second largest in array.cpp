#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int findSecondLargest(int *input, int n)
{
    
  int i = 0;
    int max1 = input[0];
    int max2 = INT_MIN;
    
  for(; i < n; i++) {
      
          if(input[i] > max1) {
              max2 = max1;
              max1 = input[i];
          
  }
      else if(input[i] > max2 && input[i] != max1){
          max2 = input[i];
      }
    
      }
    return max2;
    //Write your code here
}

int main()

{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}
