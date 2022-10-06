#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stack>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
  int n;cin>>n; //5
  int cntr = n/2;
  for(int i = 0 ; i < n ; i ++) // 0 1 2 3 4
  {
    for(int j = 0 ; j < n ; j++){
       if(i==j){
          if(i == cntr)
            cout << "X";
          else 
            cout << "\\";
       }else if(i+j == (n-1)){
        cout << "/";
       }else {
        cout << "*";
       }
    }
    cout << "\n";
  }   
}   
