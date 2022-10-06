#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
void solve(){
int n;cin >> n;
int arr[n];
for(int i = 0 ; i < n ; i ++)
    cin >> arr[i];
for(int i = 0 ; i < n ; i ++)
{
    if(arr[i] == 0){
        reverse(arr,arr+i);
    }
}
for(int i = 0 ; i < n ; i ++)
    cout << arr[i] << " ";

}
int main()
{   
fastIO 
solve();
}   
