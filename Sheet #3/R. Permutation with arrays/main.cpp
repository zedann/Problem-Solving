#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main()
{   
fastIO

int n;cin >> n;
int a[n],b[n],permutation = 1 ;
for(int i = 0 ; i < n ; i ++)
  cin >> a[i];
for(int i = 0 ; i < n ; i ++)
  cin >> b[i];
sort(a,a+n);
sort(b,b+n);

for(int i = 0 ; i < n ; i++){
  if((a[i] != b[i])){
    permutation = 0;
  }
}
if(permutation){
  cout << "yes";
}else {
  cout << "no";
}


  
  



}   
