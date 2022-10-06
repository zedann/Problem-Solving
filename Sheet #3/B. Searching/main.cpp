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
using namespace std;

void solve(){
    long long n,x;
    cin>>n;
    long long arr[n+10];
    for(int i = 0 ; i < n ; i ++)
        cin >> arr[i];
    cin >> x;
    int flag = 0;
    for(int i = 0 ; i < n ; i ++){
        if (arr[i] == x){
            cout << i << "\n";
            flag =1;
            break;
        }
    }
    if(!flag){
        cout << -1 << "\n";
    }
}
int main()
{   
 fastIO
solve();


}   
