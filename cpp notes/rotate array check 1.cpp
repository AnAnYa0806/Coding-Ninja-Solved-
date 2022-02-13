 #include <iostream>
using namespace std;


int arrayRotateCheck(int *input, int size) {

  int a = 0;
    int b = a+1;
    while( a < size){
        while( b < size){
         if(input[a] > input[b]) {
           return b;
         }  
		 else{
		 	a++;
		 	b++;
		 	
		 } 
        }
      
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

		cout << arrayRotateCheck(input, size) << endl;
	
	}
	
	return 0;
}
