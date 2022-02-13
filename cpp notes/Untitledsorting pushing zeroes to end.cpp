void pushZeroesEnd(int *input, int size)
{
    int i = 0;
         int j = 0;
    for(; i < size; i++){
           
     
     if(input[i] != 0){
      int current = input[i]; 
      input[i] = input[j];
      input[j] = current;
       j++;
     }
        
        
    }
    //Write your code here
}
