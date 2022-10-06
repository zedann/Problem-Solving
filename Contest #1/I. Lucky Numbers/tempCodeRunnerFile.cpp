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
   double n,k,a;cin>>n>>k>>a;
   double res = n * k / a;
   cout << res << "\n";
   bool isdouble = false;
   long long resCheck = res;
   if(res != resCheck)
      isdouble = true;

      if(isdouble){
         cout << "double";
      }else 
      {
         if(res >= -2147483648 && res <= 2147483647)
         cout << "int";
         else 
            cout << "long long";
      }
}
