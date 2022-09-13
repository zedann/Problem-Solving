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
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long n1,n2,n3,n4; cin>>n1>>n2>>n3>>n4;
   long long start,end;
   if((n3 < n1 && n4 < n1) || (n3 > n2 && n4 > n2)){
         cout <<-1;
   }
   else {
        if(n1 > n3 )
            start = n1;
        else 
            start = n3;

        if(n2 > n4)
            end = n4;
        else end = n2;

        cout << start << " " << end ;

    }

    
    
}
