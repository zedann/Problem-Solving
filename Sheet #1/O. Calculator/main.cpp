#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main()
{
    int x;cin>>x; //1069 => 106 => 10 => 1

    while (x >= 10)
    {
        x /= 10;
    }
    if(x % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";

}
