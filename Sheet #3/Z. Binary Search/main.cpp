#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int binarySearch(ll arr[],ll l , ll h,ll key){
  while (l <= h)
  {
    ll m = (l+h)/2;
    if(arr[m] == key){
      return 1;
    }
    if(arr[m] > key){
      h = m - 1;
    }else {
      l = m +1;
    }
  }
  return -1;
  
}
void solve(){
  ll n , q ;cin >> n >> q;
  ll arr[n];
  for(int i =0 ; i < n ; i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  while (q--)
  {
    int x;cin>>x;
    int res = binarySearch(arr,0,n-1,x);
    if(res == -1)cout << "not found\n";
    else cout << "found\n";
  }
  

  
    


}
int main()
{   
fastIO
solve();


}

  








  
  




