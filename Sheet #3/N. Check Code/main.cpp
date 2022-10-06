#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
  int n1,n2,counter = 0;
  cin >>n1>>n2;
  string s;cin>>s;
  if(s.size() == (n1+n2+1)){
    if(s[n1] == '-'){
      for(int i = 0 ; i < s.size() ; i++){
         if(s[i] - '0' >= 0 && s[i]- '0' <= 9){
            counter ++;
         }
      }
    }
  }
  if(counter == (n1 + n2)){
   cout << "Yes" << "\n";
  }else {
   cout << "No" << "\n";
  }
  
}
int main()
{   
fastIO
solve();


return 0;
}   
