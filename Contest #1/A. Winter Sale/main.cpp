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
    double x , p;cin >> x >> p;
    double disPer = 100 - x;
    double priceBefore = (100 * p) / disPer;
    cout <<fixed<<setprecision(2)<< priceBefore;
    
}
