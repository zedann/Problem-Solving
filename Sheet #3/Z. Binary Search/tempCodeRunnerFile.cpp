#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
  int n,m;
  cin >> n >> m;
  char arr[101][101];
  for(int i = 0 ; i < n ; i ++)
    for(int j = 0 ; j < m ; j++)
      cin >> arr[i][j];
  int y , x;
  cin >> y >> x;
  
  if(arr[y][x-1] != '.' && arr[y][x+1] != '.' 
  && arr[y-1][x] != '.' && arr[y+1][x] != '.' 
  && arr[y-1][x-1] != '.' && arr[y+1][x+1] != '.'
  && arr[y-1][x+1] != '.' && arr[y+1][x-1] != '.'){
    cout << "yes";
  }else {
    cout << "no";
  }



    
  

}
int main()
{   
fastIO
solve();


}

  








  
  




