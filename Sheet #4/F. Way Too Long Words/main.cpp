#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
    int t;cin>>t;
    while (t--)
    {
        string s;
        cin >> s ;
        int size = s.size();
        if(size > 10){
            cout << s[0] << s.size() - 2 << s[size-1]<<"\n";
        }else {
            cout << s << "\n";
        }
        
    }
    

}
int main()
{   
fastIO 
solve();
  



}   
