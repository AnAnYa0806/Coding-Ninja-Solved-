bool checkMember(int n){
    int f0 = 0;
    int f1 = 1;
    int temp = f0 + f1 ;
    if(n == f0 || n == f1){
      return true;  
    }
    
    while(temp <= n){ 
           temp  = f0 + f1;
            f0 = f1;
            f1 = temp;
            if(temp == n){
            return true;
           
            
        }
        
    }
   
  return false;
  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */


}

