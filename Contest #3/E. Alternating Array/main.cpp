#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
void solve(){
   int size;
   cin>>size;
   int arr[size];
   int arr2[size];
   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
      arr2[i] = arr[i];
   }
   int temp = 0;
   int cntr = 0;
   int temp2 = 0;
   int cntr2 = 1;
   arr2[0]*=-1;
   for (int i = 0; i < size; i++)
   {
      if(i ==0){
         temp = arr[i];
         temp2 = arr2[i];
      }else {
         if((temp > 0 && arr[i]>0)||(temp < 0 && arr[i] < 0)){
            arr[i] = arr[i] * -1;
            temp = arr[i];
            cntr++;   
         }else {
            temp = arr[i];
         }
         if((temp2 > 0 && arr2[i]>0)||(temp2 < 0 && arr2[i] < 0)){
            arr2[i] = arr2[i] * -1;
            temp2 = arr2[i];
            cntr2++;  
         }else {
            temp2 = arr2[i];
         }
      }
   }
   cout << min(cntr,cntr2) << "\n";
  
}
int main()
{   
fastIO 
solve();
}   
