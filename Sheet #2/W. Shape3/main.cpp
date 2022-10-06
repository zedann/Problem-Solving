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
   int n; cin >> n; //4
   int spaces = n - 1; //3
   for(int i = 1 ; i <= n ; i ++){
        for(int x = 1 ; x <= spaces ; x++){
            cout << " ";
        }
        for(int y = 1 ; y<= (i*2) - 1;y++ ){
            cout << "*";
        }
        cout << "\n";
        spaces--;
   }
   int sp = 0;
   for(int j = n ; j >= 1 ; j --){ // i=4 => i=1
        
        for(int x = 1 ; x <= sp ;x++){
            cout << " ";
        }
        for(int y =1 ; y<= (j*2)-1 ;y++){
            cout << "*" ;
        }
        cout <<"\n";
        sp++;
   }
}   
