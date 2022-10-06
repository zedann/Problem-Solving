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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string alph = "abcdefghijklmnopqrstuvwxyz";
    char c; cin >> c;
    for(int i = 0 ; i < alph.size() ; i ++)
    {
        if(alph[i] == c){
            if(alph[i] == 'z')
            {
                cout << "a";
                break;
            }else 
            {
                cout << alph[i+1] << "\n";
                break;
            }  
        }
    }
    
}
