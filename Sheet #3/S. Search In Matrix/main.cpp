#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main()
{   
fastIO

int r,c,n;cin>>r>>c;int arr[r][c];
for(int i = 0 ; i < r ; i++){
  for(int j = 0 ; j < c ; j++){
    cin >> arr[i][j];
  }
}
cin >> n;
int flag = 0;
for(int i = 0 ; i < r ; i++){
  for(int j = 0 ; j < c ; j++){
    if(arr[i][j] == n){
      flag = 1;
    }
  }
}
if(flag){
  cout << "will not take number";
}else cout << "will take number";

  
  



}   
