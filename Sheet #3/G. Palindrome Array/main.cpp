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
    ll n;cin>>n;
    ll arr[n];
    for(int i = 0 ; i < n;i++)
        cin>>arr[i];
    int palindrome = 1;
    for(int i = 0 ; i < n;i++)
    {
        if(!(arr[i] == arr[n-(i+1)])){
            palindrome = 0;
        }
    }
    if(palindrome){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
int main()
{   
 fastIO
solve();


}   
