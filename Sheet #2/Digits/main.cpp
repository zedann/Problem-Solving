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
   while (t--)
   {
     string num;cin>>num;
     for(int i = num.size()-1  ; i >= 0 ; i--){
          cout << num[i] << " ";
     }
     cout << "\n";
   }
   
   
   
   
}   
