#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
    
    string str ;
    cin >> str;
    sort(str.begin(),str.end());
    for(int i = 0 ; i < str.size();i++){
        int cntr = 0;
        
            if(str[i] == str[i-1]){
                continue;
            }else {
                for (int j = 0; j < str.size(); j++)
                    {
                        if(str[i] == str[j]){
                            cntr++;
                        }
                    } 
            }
        
        cout << str[i] << " : "<<cntr << "\n";
        
         
    }
    

    

}
int main()
{   
fastIO 
solve();
  



}   
