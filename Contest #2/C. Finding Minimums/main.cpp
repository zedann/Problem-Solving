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
  long long size , sq;
  cin >> size >> sq;
  long long min,flag = 1,cntr=0;
  for(long long i = 1 ; i <= size ; i++){
    long long val;
    cin >> val;
    if(flag){
      min = val;
      flag = 0;
    }else {
      if(val < min){
        min = val;
      }
    }
    cntr++;
    if(cntr >= sq || i == size){
      cout << min <<" ";
      cntr = 0;
      flag = 1;
    }
    
    
  }

  
  
}   
