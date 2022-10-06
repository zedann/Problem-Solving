#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
void solve(){
   ll size ;cin>>size;
   ll arr[size];
   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   for (int i = 0; i <= size/2; i++)
   {
      if(size % 2 == 0){
         if(!(i==size/2)){
            cout << arr[i] << " "<< arr[size-1-i] << " ";
         }
      }else {
         
         if(i == (size/2)){
            cout << arr[i];;
         }else {
            cout << arr[i] << " "<< arr[size-1-i] << " ";
         }
      }
   }
   


   
   
    
}
int main()
{   
fastIO 
solve();
}   
