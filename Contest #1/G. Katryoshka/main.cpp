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
   long long eye,mouth,body,res=0;
   cin>>eye>>mouth>>body;
   long long mn = min({eye,mouth,body});
   res = mn;
   eye -= mn;
   mouth -= mn;
   body -= mn;
   if(eye <= 0 || body <= 0){
      cout << res;
   }else {
      mn = min((eye/2),body);
      res += mn;
      cout << res;
   }
}
