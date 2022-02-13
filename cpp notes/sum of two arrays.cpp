void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int i = size1-1;
    int j = size2-1;
    int carry = 0;
    int k = max(size1, size2);
    
    while( i >= 0 && j >= 0) {
        int sum = input1[i] + input2[j] + carry;
        output[k] = sum%10;
        carry = sum/10;
        i--;
        j--;
        k--;
        }
        while(i >=0) {
         int sum = input1[i]  + carry;
         output[k] = sum%10;
         carry = sum/10;
         i--;
         k--;
        }
    while( j >= 0 ){
       int sum = input1[j]  + carry;
         output[k] = sum%10;
         carry = sum/10;
         j--;
         k--; 
    }
    output[k] = 0;
    
}



// Sample Input 1:
//1
//3
//6 2 4
//3
//7 5 6
//Sample Output 1:
//1 3 8 0
