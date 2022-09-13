#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main()
{
    char x ;cin>>x;
    int y = (int)x;
    if(x >= 48 && x <= 57)
        cout<<"IS DIGIT"<<"\n";
    else if(x >= 65 && x <= 90)
        cout<<"ALPHA\n"<<"IS CAPITAL";
    else if(x>=97 && x<=122)
        cout<<"ALPHA\n"<<"IS SMALL";

}
