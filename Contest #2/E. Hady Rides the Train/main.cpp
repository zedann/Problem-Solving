#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stack>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
long long id,row,col;
cin>>id;
row = id / 4;
if(row % 2 == 0){
    col = id % 4;
}else {
    col = abs((id % 4)-3);
}
cout << row << " " <<col;

}
int main()
{   
fastIO
solve();

}   
