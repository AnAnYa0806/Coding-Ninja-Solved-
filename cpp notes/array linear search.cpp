
#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int x)
{
	int ans;
   for(int i = 0; i < n; i++) {
       if(arr[i] == x){
        ans = i;
        return ans;
       }
       

       	return -1;
       }
	  
   
    
    //Write your code here
    
}
int main() {
int t;
    cin>>t;
    int j = 0;
    while( j <= t){
    
    int N;
    cin>>N;
    int arr[1000];
    int i = 0;
    for(i = 0; i < N; i++){
        cin>> arr[i];
    
    int X;
    cin>>X;
    linearsearch(arr, N, X);
     int res = linearsearch(arr, N, X);
        
        cout<<res<<endl;
    }
    
    }
    j++;
}
