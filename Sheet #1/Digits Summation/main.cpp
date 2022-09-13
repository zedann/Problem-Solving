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
    double r ; cin >> r ;
    cout <<fixed<<setprecision(9)<<pi * pow(r,2);
}
