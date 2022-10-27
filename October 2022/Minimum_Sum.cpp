#include<bits/stdc++.h> 
using namespace std;
#define ll long long

ll gcd(ll m,ll n){
    if (m>n)
    {
        swap(m,n);
    }

    for (ll i = m; i >=1; i--)
    {
        if (m%i==0&&n%i==0)
        {
            return i;
        }
        
    }

    return 1;
    
    
}


int main(){
    int t;cin>>t;
    while(t--){

        ll n;
        cin>>n;
        
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        vector<ll> v;
        ll sum=0;
        v.push_back(arr[0]);
        for (ll i = 0; i < n-1; i++)
        {
            v.push_back(gcd(arr[0],arr[i+1]));
            // ll x=gcd(arr[0],arr[i+1]);

            // if (sum<x)
            // {
            //     sum=x;
            // }
            
        }

        
        for (ll i = 0; i < v.size(); i++)
        {
            sum+=v[i];
        }
        
        cout<<sum<<endl;

        
        
    }
return 0;
}