#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
void solve(){
  int t;cin>>t;
  while (t--)
  {
      int size;cin>>size;
      int arr[size];
      for(int i=0;i<size;i++)
         cin >>arr[i];
      if(size % 2 ==0){
         int even = 0 , odd= 0;
         for(int i =0 ; i < size ; i++){
            if(arr[i] % 2 ==0)
               even++;
            else odd++;
         }
         int mn = min(even,odd);
         int ma = max(even,odd);
         cout << (ma - mn) /2 << "\n";


      }else {
         cout << -1 << "\n";
      }
      
  }
  

}
int main()
{   
fastIO 
solve();
}   
