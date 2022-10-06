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

int main()
{   
 fastIO

 long long t;cin>>t;
 long long l,r;
 while (t--)
 {
    cin>>l>>r;
    long long n1 = max(l,r);
    long long n2 = min(l,r);
    n2--;
    long long res1 = n1*(n1+1)/2;
    long long res2 = n2*(n2+1)/2;
    cout << abs(res1-res2) << "\n";
 }
  
}   
