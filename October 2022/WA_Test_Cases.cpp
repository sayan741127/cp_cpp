#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll arr[n];
        string s;
        vector<ll> v;

        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        cin>>s;

        for (ll i = 0; i < n; i++)
        {
            if (s[i]=='0')
            {
                v.push_back(arr[i]);
            }
            
        }

        sort(v.begin(),v.end());

        cout<<v[0]<<endl;
        
        
    }
return 0;
}