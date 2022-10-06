#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
    
    int t;cin>>t;
    while (t--)
    {
        string s,t,newStr;
        cin >> s >> t;
        int size = max(s.size(),t.size());
        /*
        01 012
        ey gpt
        */
       int flag1 = 1,flag2;
        for (int i = 0; i < size; i++)
        {
            if(s.size() != i && flag1){
                cout << s[i];
            }else {
                flag1=0;
            }
            if(t.size()!=i && flag2){
                cout << t[i];
            }else {
                flag2=0;
            }
        }
        cout << "\n";
        

    }   
    
    

    

}
int main()
{   
fastIO 
solve();
  



}   
