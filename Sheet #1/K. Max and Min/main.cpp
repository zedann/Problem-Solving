#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main()
{   
    long long a,b,c;cin>>a>>b>>c;
    if(min(a,b) > c){
        cout << c << " ";
    }else {
        cout << min(a,b) << " ";
    }
    if(max(a,b) < c){
        cout << c;
    }else {
        cout << max(a,b);
    }
    

}
