#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
    int t;cin>>t;
    while (t--)
    {
    string s;
    cin >> s;
    int flag = 0;
    for(int i = 0 ; i < s.size();i++){
        if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0'){
            flag = 1;
            break;
        }else if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "Good\n";
    }else cout << "Bad\n";
    }
    

    

}
int main()
{   
fastIO 
solve();
  



}   
