#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main()
{   
fastIO
//--------------program--------------
int n , m ;
cin >> n >> m;
int arr[100001] = {0};
for (int i = 0; i < n; i++)
{
  int num ; cin >> num;
  arr[num]++;
}
for(int i = 1 ; i <= m ; i++){
  cout << arr[i] << "\n";
}



}

  








  
  




