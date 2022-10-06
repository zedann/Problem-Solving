#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main()
{   
fastIO
//--------------program--------------
int row,col;
cin >> row >> col;
int temp;
while (row--)
{
  int arr[col];
  for(int i =0;i<col ; i++)
    cin >> arr[i];
  for(int i = 0 ; i < col/2 ; i++){
     swap(arr[i] , arr[col - i - 1]);
  }
  for (int i =0;i<col ; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}


}

  








  
  




