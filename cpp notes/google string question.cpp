#include<bits/stdc++.h>
using namespace std;

int solve (string S) {
   // Write your code here
   set<char> s;
   s.insert('a');
   s.insert('e');
   s.insert('i');
   s.insert('o');
   s.insert('u');

   vector<int> v;

    int fv = 0,bv=0;
   int i;
   for(i=0;i<S.size();++i){
      if(s.find(S[i])!=s.end() ){
          ++fv;
      }
      else{
          break;
      }
   }

//    cout << fv << endl;
    int k;
   for(  k = S.size()-1; k>i; --k ){
       if(s.find(S[k])!=s.end()){
          ++bv;
      }
      else{
          break;
      }
   }
    // cout << bv << endl;
   string rem = "";
   for(int y=i; y<=k;++y){
       rem += S[y];
   }
//    cout << rem << endl;
   int ans = 0;
   for( int p = 0; p<rem.size();++p ){
       int mx =0;
       while(s.find(rem[p])!=s.end()){
           ++mx;
           ++p;
       }
       ans = max(ans,mx);
   }
    // cout << ans << endl;
   return fv+bv+ans;

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        string S;
        cin >> S;

        int out_;
        out_ = solve(S);
        cout << out_;
        cout << "\n";
    }
}
