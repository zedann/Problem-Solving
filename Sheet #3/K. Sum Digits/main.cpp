#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
   int n;
   cin>>n;
   string val;
   cin>>val;
    ll sum = 0;
   for(int i = 0 ; i < val.size() ; i++){
        sum += (ll)val[i] - '0';
   } 
   cout << sum << "\n";  
}
int main()
{   
fastIO
solve();


return 0;
}   
