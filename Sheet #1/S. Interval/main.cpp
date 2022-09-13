#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;

int main()
{   
    int arr[3];
    for(int i = 0 ; i < 3 ; i ++)
      cin >> arr[i];
     int temp[3];
    for(int i = 0 ; i < 3 ; i ++)
      temp[i] = arr[i];
    
    
    sort(arr,arr+3);

    for(int i = 0 ; i < 3 ; i ++)
      cout <<  arr[i] << "\n";
      cout << "\n";
    for(int i = 0 ; i < 3 ; i ++)
      cout <<  temp[i] << "\n";
    
}
