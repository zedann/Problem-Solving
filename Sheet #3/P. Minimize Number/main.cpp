#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
bool isEven(ll arr[] , int n){
  bool flag = true;
  for(int i = 0 ; i < n ; i++){
  if(arr[i] % 2 != 0)
    flag = false;
  
}
  return flag ;
}
int main()
{   
fastIO

int n,cntr = 0;cin>>n;
bool isEvenFlag;
ll arr[n];
for(int i = 0 ; i<n ; i++)
  cin >> arr[i];

  isEvenFlag = isEven(arr,n);
  if(!isEvenFlag){
    cout << 0 << "\n";
    return 0;
  }
  while (isEvenFlag)
  {
    for(int i = 0 ; i < n ; i++)
    arr[i]/=2;
    cntr++;
    if(!isEven(arr,n)){
      isEvenFlag = false;
    }
  }
  cout << cntr;
  
  



}   
