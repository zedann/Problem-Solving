#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
   long long n1,n2,n3,n4;cin>>n1>>n2>>n3>>n4;
   n1 = n1 % 100;
   n2 = n2 % 100;
   n3 = n3 % 100;
   n4 = n4 % 100;
    long res = (n1 * n2 * n3 * n4) % 100 ;

    if(res < 10)
        cout << "0"<< res;
    else 
        cout << res;   
}
