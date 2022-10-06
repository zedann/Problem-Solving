#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
    string a,b;cin>>a>>b;
    cout << a.size() << " " << b.size() << "\n";
    cout << a + b << "\n";
    swap(a[0],b[0]);
    cout << a << " " << b <<"\n";

}
int main()
{   
fastIO 
solve();
  



}   
