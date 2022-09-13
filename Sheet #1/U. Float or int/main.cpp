#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main()
{   
   string x;cin>>x;
   string r ,l;
   int rt,lft;
    
   stringstream s1;
   stringstream s2;
   int idx;
   for(int i = 0 ; i < x.size(); i ++)
    {
        if(x[i] == '.')
        {
           idx = i;
           r = x.substr(0,idx);
           l = x.substr(idx+1);
           break;
        }
    }
    //get it as int values
    s1 << r;
    s1 >> rt;
    s2 << l;
    s2 >> lft;
    //result 
    if(lft == 0) 
        cout << "int " << rt;
    else cout << "float "<<rt<<" 0."<<lft;
}
