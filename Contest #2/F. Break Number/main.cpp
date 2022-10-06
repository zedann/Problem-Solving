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
    int t;cin>>t;
    long long n,max;
    int flag = 0;
    while (t--)
    {
        cin>>n; // 24
        long long counter=0,temp ; // cntr = 0  max = 3
        if(flag == 0){
            max = 0;  
            flag =1;
        }
        while (n%2 == 0)
        {
            counter++;
            n/=2;
        } // cntr = 0
        if(counter > max){ //0 > 3
            max = counter;  //max = 3 
        }    
    }
    cout << max << "\n";
    
}
int main()
{   
fastIO
solve();

}   
