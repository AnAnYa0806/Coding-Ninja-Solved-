vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    int i = 0;
    int n = arr.size();
     vector< vector<int> > ans;
    for(; i < n; i++) {
        int j =  i + 1;
       while( j < n) {
           if( arr[i] + arr[j] == s) {
                vector<int> pair(2);
                pair[0] = arr[i];
                pair[1] = arr[j];
                ans.push_back(pair);
             
           }
           else {
               j++;
           }
       }
    }
}
