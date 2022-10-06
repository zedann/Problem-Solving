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
    int t;cin>>t;
    while (t--)
    {
        int n,res,tmp,flag = 0;cin >> n;
        int arr[n];
        for(int i = 1; i <= n ; i++)
            cin>>arr[i];
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++){
                if(i < j){
                    res = arr[i] + arr[j] + j - i;
                    if(flag == 0){
                        tmp = res;
                        flag = 1;
                    }
                    if(res < tmp){
                        tmp = res;
                    }
                }
                
            }
        }
        cout << tmp << "\n";

    }
}
int main()
{   
 fastIO
solve();


return 0;
}   
