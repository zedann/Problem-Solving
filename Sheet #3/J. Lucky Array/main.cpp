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
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
        cin >> arr[i];
    
    int min = arr[0],counter = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(min > arr[i]){
            min = arr[i];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
       if(arr[i] == min){
        counter ++;
       }
    }
    if(counter % 2 == 0)
        cout << "Unlucky" << "\n";
    else cout << "Lucky" << "\n";
}
int main()
{   
 fastIO
solve();


return 0;
}   
