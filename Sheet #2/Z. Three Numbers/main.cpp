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
   
   int n1,n2;cin>>n1>>n2;//2 1
   int counter = 0;
   for(int i = 0 ; i<= n1 ; i++){ // 0 1 2
    for(int j = 0 ; j<=n1;j++){
        if((n2 - i - j)>=0 && (n2 - i - j)<= n1)
            counter++;
    }
   }
   cout << counter << "\n"; 
   
   
   
}   
