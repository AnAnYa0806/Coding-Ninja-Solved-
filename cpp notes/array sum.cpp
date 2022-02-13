#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int a[1000];
    int i;
    for(i = 0; i < n; i++){
        cin>>a[i];
    }
    
    for( i = 0; i < n ; i++){
        sum += a[i];
    }
    cout<<sum<<endl;
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    
}
