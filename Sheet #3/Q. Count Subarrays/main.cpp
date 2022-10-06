#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main()
{   
fastIO
int t;cin>>t;
while (t--)
{
  int n,cntr=0;cin>>n;
  int arr[n];
  for(int i =0 ;i < n ; i ++){
    cin >> arr[i];
    cntr++;
  }
  if(n==1){
    cout << cntr << "\n";
  }else {
    for(int i = 0 ; i < n-1 ; i ++){
      int myval = arr[i];
      for(int j = i+1 ; j < n ; j++)
      {
        if(myval < arr[j]){
          cntr++;
          myval = arr[j];
        }else {
          break;
        }
      }
    }
    cout << cntr << "\n";
  }
}


  
  



}   
