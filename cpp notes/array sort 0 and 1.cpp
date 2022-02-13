void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int i = 0;
    int zeropos = 0;
    for(; i < size; i++){
        if(input[i] == 0){
            int temp = input[i];
            input[i] = input[zeropos];
            input[zeropos] = temp;
            zeropos++;
        }
        
    }
}
