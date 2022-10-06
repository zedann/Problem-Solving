#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stack>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
   int t;cin>>t;
   long long n;
   for(int i = 0 ; i < t ; i ++){
    cin >> n;
    int ones = 0;
    while (n>0)
    {
        if(n%2 == 1){
            ones += 1;
        }
        n/=2;
    }
    long long sum = 0;
    for(int i = 0 ; i < ones ; i++){
        sum += 1 * pow(2,i);
    }
    cout << sum << "\n";
   }
   
}   
