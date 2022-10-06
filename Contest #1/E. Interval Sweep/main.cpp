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
  int a ,b ; cin >> a >> b ;
       if(abs(a-b) >= 2)
       {
          cout <<"NO";
       }else if (a == b && b == 0)
       {
          cout << "NO";
       }else {
          cout <<"YES";
       }

}
