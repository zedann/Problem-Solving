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
   long long a , b , c ;char s,q;cin>>a>>s>>b>>q>>c;
   
   if(s == '+')
     {
      if(a + b == c)
        cout << "Yes";
      else 
        cout << a + b ;
     }
  else if(s == '-')
     {
      if(a - b == c)
        cout << "Yes";
      else 
        cout << a - b ;
     }
  else if(s == '*')
     {
      if(a * b == c)
        cout << "Yes";
      else 
        cout << a * b ;
     }

   


    
    
}
