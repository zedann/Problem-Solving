#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
void solve(){
    ll n,k;cin>>n>>k;
    ll arr[n];
    for(int i = 0 ; i < n ; i ++)
        cin >> arr[i];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    ll sum = 0;
    for(int i = 0 ; i < k ; i++){
        if(arr[i] > 0)
            sum += arr[i];
    }
    cout << sum << "\n";
    
}
int main()
{   
fastIO 
solve();
}   
