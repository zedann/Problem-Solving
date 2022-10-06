#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
    string s;cin>>s;
    int size = s.size();
    int flag = 1;
    for(int i = 0 ;i < size ; i++){
        if(s[i] != s[size-i-1]){
            flag = 0;
        }   
    }
    if(flag)
        cout << "YES";
    else cout << "NO";
    

    

}
int main()
{   
fastIO 
solve();
  



}   
