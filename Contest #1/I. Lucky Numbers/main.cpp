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
   string n;cin>>n;
   int num1 , num2;
   stringstream s1;
   stringstream s2;
   s1 << n[0];
   s2 << n[1];
   s1 >> num1;
   s2 >> num2; 
   if((num2 == 0)||(num1 % num2 == 0) || (num2 % num1 == 0))
      cout << "YES";
   else 
      cout << "NO";
   



}
