#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
    string s;cin>>s;
    int sum = 0;
    for(int i =0 ; i < s.size();i++){
        sum += int(s[i] - '0');
    }
    cout << sum << "\n";

}
int main()
{   
fastIO 
solve();
  



}   
