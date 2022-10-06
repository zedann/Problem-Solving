#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main()
{   
fastIO

int n;cin>>n;
int arr[n][n];
for(int i = 0 ; i < n ; i++)
  for(int j = 0 ; j<n;j++)
    cin >> arr[i][j];

int pd= 0 , sd=0;
for(int i = 0 ; i < n ; i++){
  for(int j = 0 ; j<n;j++)
  {
   if(i == j){
    pd+=arr[i][j];
   }
   if(i + j == (n-1)) {
    sd+= arr[i][j];
   } 
  }
}
cout << abs(pd - sd);



  
  



}   
