#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main()
{   
fastIO
//---------program-----------
int n,m;cin >> n >> m;
int a[n] , b [m];
for(int i = 0 ; i < n ; i++)
  cin >> a[i];
for(int i = 0 ; i < m ; i++)
  cin >> b[i];

int z = 0;
int counter = 0;
for(int i = 0 ; i < n ; i++){
  if(a[i] == b[z]){
    counter++;
    z++;
  }
}
  if(counter == m){
    cout << "YES";
  }else cout << "NO";
  


}





  
  




