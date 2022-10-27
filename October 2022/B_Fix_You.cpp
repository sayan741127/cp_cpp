#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;

        char arr[n][m];

        for (ll i = 0; i < n; i++)
        {
        // string s;
        // cin>>s;
        // cout<<s;
            for (ll j = 0; j< m; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        // for (ll i = 0; i < n; i++)
        // {
        //     for (ll j = 0; j < m; j++)
        //     {
        //         cout<<arr[i][j];
        //     }
        //     cout<<endl;
            
        // }

        

        ll cnt=0,flag=0;

        for (ll i = 0; i < m; i++)
        {
            if (arr[n-1][i]=='D')
            {
                cnt++;
            }
            // cout<<arr[n-1][i];
            
        }
        // cout<<endl;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i][m-1]=='R')
            {
                flag++;
            }
            
        }
        cout<<cnt+flag<<endl;
        
        
    }
return 0;
}