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
   int n1 , n2 ;
   char op;
   cin >> n1 >> op >> n2;
   if(op == '>')
     n1 > n2 ? cout << "Right" : cout << "Wrong";
   else if (op == '<')
     n1 < n2 ? cout << "Right" : cout << "Wrong";
   else if (op == '=')
     n1 == n2 ? cout << "Right" : cout << "Wrong";
}
