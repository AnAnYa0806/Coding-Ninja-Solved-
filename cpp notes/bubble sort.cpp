#include<iostream>
using namespace std;

void bubbleSort(int arr*, int size)
{
    int i =0;
    for(; i < size - 1; i++ ){   // this keep the track of rounds compeleted in bubble sort, as the maximum amount of round needed is n-1; in an array of size n
        int j = 0;
            for(; j < size - i - 1; j++){         //size - i - 1; here i will increment after each round , as after first round last element is sorted , so the next round goes on without 
                                                   //traversing through the last element
                if( arr[j] > arr[j + 1]){
                    int temp = arr[j];             // here we swap the elements, the bigger element with the smaller one
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
    }
    //Write your code here
}

void display() {
	 cout<<res<<endl;
	
}

int main(){
	
	int N;
    cin>>N;
    int arr[1000];
    int arr
    int i = 0;
    for(i = 0; i < N; i++){
        cin>> arr[i];
    
     
    bubblesort(arr, N);
    int res = bubblesort(arr, N);
        
    display();
    
        
    }
    
}
