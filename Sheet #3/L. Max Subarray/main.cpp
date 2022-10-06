#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
   int t;
   cin>>t;
   while (t--)
   {
      int n;
      cin>>n;
      int arr[n];
      for(int i = 0 ; i <n ; i++){
         cin >> arr[i];
         cout << arr[i] <<" ";
      }

      int i = 0,z=0;
      int ma;
      while (true)
      {
         if(z == n -1){
            break;
         }
         if(i == z){
            ma = max(arr[i],arr[i+1]); 
         }else {
            ma = max(ma,arr[i+1]);
         }
         cout << ma << " ";
         i++;
         if(i == n - 1){
            z++;
            i = z;
         }
      }
      cout << "\n";

   }
   
}
int main()
{   
fastIO
solve();


return 0;
}   
