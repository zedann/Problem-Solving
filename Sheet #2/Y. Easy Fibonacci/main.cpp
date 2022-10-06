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
int fib(int n){
    if(n < 2)
        return 0;
    return (n-1) + (n-2);
}

int main()
{   
   int n;cin>>n;
   int t1 = 0;
   int t2 = 1;
   int st= 0;
   for(int i = 0 ; i<n ; i++){
        if(i == 0 ){
            cout << 0 <<" ";
            t1 = 0;
        }else if (i == 1){
            cout << 1<<" ";
            t2 = 1;
        }else {
            st = t1 + t2;
            cout << st << " ";
            t1 = t2;
            t2 = st;
        }

        
   }
   
}   
