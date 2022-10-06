#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void solve(){
    
    int n,q;
    string s; // assiutinupperegypt
    cin>>n>>q;
    cin >> s;
    string query;
    int start , end;

    while (q--)
    {
        cin >> query;
        if(query == "pop_back"){
            s.pop_back();
        }else if(query == "front"){
            cout << s.front() << "\n";
        }else if(query == "back"){
            cout << s.back() << "\n";
        }else if(query == "sort"){
            cin >> start >> end;
            sort(s.begin() + min(start,end) - 1  , s.begin() + max(start,end)  );
        }else if(query == "reverse"){
            cin >> start >> end;
            reverse(s.begin() + min(start,end) - 1  , s.begin() + max(start,end)  );
        }else if(query == "print"){
            int pos;
            cin >> pos;
            cout << s[pos-1] <<"\n";
        }else if (query == "substr"){
            cin >> start >> end;
            for (int i = min(start,end)-1; i < max(start,end); i++)
            {
                cout << s[i];
            }
            cout << "\n";
        }else if (query == "push_back"){
            char x;
            cin >> x;
            s.push_back(x);
        }
        

    }
    

    

}
int main()
{   
fastIO 
solve();
  



}   
