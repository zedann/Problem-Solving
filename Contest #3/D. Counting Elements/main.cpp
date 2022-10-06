#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
void solve(){
   int n;cin>>n;
   int arr[n+10];
   for (int i = 0; i < n; i++)
        cin >> arr[i];

    int cntr = 0;
   for (int i = 0; i < n; i++)
   {    
        int temp = arr[i]+1;
       for (int j = 0; j < n; j++)
        {    
            if(temp == arr[j]){
                cntr++;
                break;        
            }
        }   
   }
   cout << cntr << "\n";


   
   
    
}
int main()
{   
fastIO 
solve();
}   
