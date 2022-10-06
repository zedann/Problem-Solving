#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
  ll n,q;
  cin >> n >> q;
  ll arr[n+10] , arr2[n+10];
  for(ll i = 1 ; i <= n ; i ++){
    cin >> arr[i];
    if(i == 1){
        arr2[i] = arr[i];
    }else {
        arr2[i] = arr2[i-1] + arr[i];
    }
  }
   
  while (q--)
  {
    ll l ,r ;
    cin >> l >>r ;
    cout << (arr2[r] - arr2[l]) + arr[l] << "\n";
  }
  
    


}
int main()
{   
fastIO
solve();


}

  








  
  




