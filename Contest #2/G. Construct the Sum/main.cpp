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
long long res[100001];
void solve(){ 
    long long t;cin>>t;
    long long idx = 0;
    while (t--)
    {
        long long n1,n2;
        cin >> n1 >> n2;
        
        if((n1*(n1+1)/2) < n2){
            cout << -1 << "\n";
            continue;
        }else {
            long long sum = 0;

            for(long long i = n1 ; i >= 1 ; i --){
                if(sum + i <= n2){
                    sum+=i;
                    res[idx] = i;
                    idx++;
                }
                if(sum == n2){
                    break;
                }
            }
        }
        for(long long k = 0 ; k < idx ; k++){
            cout << res[k] <<" ";
        }
        cout << "\n";
        idx = 0;
    }
    
    
    
}
int main()
{   
fastIO
solve();

}   
