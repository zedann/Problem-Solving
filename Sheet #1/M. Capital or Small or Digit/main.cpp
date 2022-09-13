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
    if(x >= 65 && x <= 90){
        y = (x+32);
    }
    else if(x>=97 && x<=122){
        y = x - 32;
    }

    cout<< (char) y ;
        

}
