#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main()
{   
    long long a,b;cin>>a>>b;
    bool flag = false;
    if(a % b == 0 || b % a == 0){
        flag = true;
    }
    if(flag)
        cout << "Multiples";
    else cout << "No Multiples";

}
