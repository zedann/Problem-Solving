#include <iostream> 
#include<iomanip> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
const double pi = 3.141592653;
int main()
{   
    long long n,m;cin>>n>>m;
    n = n %10; m = m %10;
    cout << n + m ;
}
