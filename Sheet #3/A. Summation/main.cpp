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
  long long n,sum = 0;cin>>n;
  long long arr[n+10];
  for(int i = 0 ; i < n ; i++)
    cin>>arr[i];
  for(int i = 0 ; i < n ; i++)
    sum+=arr[i];

    cout << abs(sum);

   
   
   
   
}   
