#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main()
{   
    double a,b;
    cin >> a >> b;
    double r = a / b ;
    cout<<"floor " << a << " / " << b << " = " << floor(r) << "\n";
    cout<<"ceil " << a << " / " << b << " = " << ceil(r)<< "\n";
    cout<<"round " << a << " / " << b << " = " << round(r);
}
