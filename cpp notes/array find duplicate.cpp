int duplicateNumber(int *arr, int size)
{
    //Write your code here
   int i = 0;
    for(i = 0; i < size - 1; i++){
        int j = i + 1;
        for(; j < size; j++){
            if(arr[i] == arr[j] ){
                return arr[i];
            }
            
        }
    }
}
