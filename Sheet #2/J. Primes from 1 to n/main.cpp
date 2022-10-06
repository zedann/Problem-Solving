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

int isPrime(int n){
    int div = n / 2;
    for(int i = 2 ; i <= div ; i++ ){
        if(n%i==0)
            return -1;
    }
    return n;
}
int main()
{   
    int counter;cin>>counter;
    for(int i = 2 ; i <= counter ; i++){
        int res = isPrime(i);
        if(res != -1){
            cout << res << " ";
        }
    }
    
    
    
        
    
    
    
    
    
}   
