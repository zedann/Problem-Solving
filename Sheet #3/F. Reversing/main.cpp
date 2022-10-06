#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stack>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i = n - 1 ; i>= 0;i-- )
        cout << arr[i] <<" "; 
}
int main()
{   
 fastIO
solve();


}   
