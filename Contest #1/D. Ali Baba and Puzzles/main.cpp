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
   long long n1,n2,n3,n4;cin>>n1>>n2>>n3>>n4;
   if(n1 + n2 - n3 == n4)
        cout << "YES";
   else if(n1 + n2 * n3 == n4)
        cout << "YES";
   else if(n1 - n2 + n3 == n4)
        cout << "YES";
   else if(n1 - n2 * n3 == n4)
        cout << "YES";
   else if(n1 * n2 + n3 == n4)
        cout << "YES";   
   else if(n1 * n2 - n3 == n4)
        cout << "YES";  
    else 
        cout << "NO";  

}
