#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    for(int i =0 ;i < s.size();i++){
        if(s[i] == ','){
            s[i] = ' ';
        }
        if(s[i] >= 65 && s[i] <= 90){
            s[i] +=  32;
        }else if (s[i] >= 97 && s[i] <= 122){
            s[i] -=  32;
        }
    }
    cout << s << "\n";

    

}
int main()
{   
fastIO 
solve();
  



}   
