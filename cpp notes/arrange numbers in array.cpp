void arrange(int *arr, int n)
{
  int start = 0;
    int end = n-1;
    int number = 1;
    while( start <= end ){
        arr[start] = number;
        number++;
        start++;
        arr[end] = number;
        number++;
        end--;
        if( start == end){
            arr[start] = number;
        }
    }
       
           
    }
    //Write yo
    
    alter :
    	
    	
    	
    	void arrange(int *arr, int n)
{
  int start = 0;
    int end = n-1;
    int number = 1;
    while( start <= end ){
        if(number%2 == 1){
        arr[start] = number;
        number++;
        start++;
    }
        else{
        arr[end] = number;
        number++;
        end--;
        }
        
        
    }
       
           
    }
