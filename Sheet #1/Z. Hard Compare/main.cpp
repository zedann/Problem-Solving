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
    long long n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;
    double res1 = n2 * (log(n1));
    double res2 = n4 * (log(n3));
    res1 > res2 ? cout << "YES" : cout << "NO";
}
