#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll arr[n];
        for (int j = 0; j <n; j++)
        {
            cin>>arr[j];
        }
        
        ll ans=0;
        for (int i = 0; i <n; i++)
        {
            ans=ans+arr[i];
        }
        if (m>ans)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<(ans-m)<<endl;
        }
        
        
        
        // ll a=(m*(m+1)/2)+(m*((n*(n+1)/2)-1));
        // cout<<a<<endl;
    }
return 0;
}