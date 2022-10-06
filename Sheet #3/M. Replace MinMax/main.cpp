#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
   int n;cin>>n;
   int arr[n];
   for(int i = 0 ; i < n ; i ++)
      cin >> arr[i];
   int min = arr[0];
   int max = arr[0];
   int minIdx=0,maxIdx=0;
   for(int i = 0 ; i < n ; i++){
      if(arr[i] > max){
         max = arr[i];
         maxIdx = i;
      }
      if(arr[i] < min){
         min = arr[i];
         minIdx = i;
      }
   }
  
   swap(arr[minIdx] , arr[maxIdx]);
   for(int i = 0 ; i < n ; i ++)
      cout << arr[i] << " ";

  
}
int main()
{   
fastIO
solve();


return 0;
}   
