#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{   
fastIO
int pos; //5
cin >> pos;
ll start = 0,sec = 1;
if(pos ==1 ){
  cout << start;
}
else if(pos == 2){
  cout << sec;
}else {

  for(int i = 3 ;i <= pos ; i++){
   ll res = start + sec;
    start =sec;
    sec = res;
  }
  cout << sec << "\n";
}

return 0;
}   
