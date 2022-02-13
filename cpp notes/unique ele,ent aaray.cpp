int findUnique(int *arr, int size)
{
    int i = 0;
    for(i = 0; i < size; i++){
        int j = 0;
        for(; j < size; j++){
           if( i != j && arr[i] == arr[j]){
            break;
            
        }  
        }
       if(j == size){
         return arr[i]  ;
       }
    }
    //Write your code here 
    //to find unique element in a an array n with elemnets 2m +1 . to find 1 different element//
}
