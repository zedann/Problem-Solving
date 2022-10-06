#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
int n;cin>>n;
   string s;
   cin>>s;
   //01234
   //ababb
   char tmp;
   int cntr = 0;
   for (int i = 0; i < n; i++)
   {
    if( i == 0 ){
        tmp = s[i];
        cntr++;
    }else {
        if(s[i] != tmp){
            cntr++;
            tmp = s[i];
        }   
    }
   }
   
   cout<< cntr<<"\n";
}
int main()
{   
fastIO 
solve();
  



}   
