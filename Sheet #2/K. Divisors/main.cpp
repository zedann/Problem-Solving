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
    int n1,n2;
    cin>>n1>>n2;
    
    int maxNum = max(n1,n2);
    int minNum = min(n1,n2);
    int maxDivisor;
    for(int i = 1 ; i <= maxNum ; i ++)
    {
        if(maxNum % i == 0 && minNum % i == 0)
        {
            maxDivisor = i;
        }
    }
    cout << maxDivisor;
    
}   
