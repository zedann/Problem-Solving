#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main()
{   
    long long n ;cin>>n;
    int years = 0 , months = 0; //800

    while (n>=365)
    {
        n = n - 365;
        years++;  
    }
    while (n>=30)
    {
      n = n - 30;
      months++;
    }
    
    cout << years <<" years\n"<< months << " months\n" << n << " days";


}
