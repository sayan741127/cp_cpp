#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;

        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        for (ll i = 0; i < y; i++)
        {
            sort(arr,arr+n);
            arr[0]^=x;
            
        }
        sort(arr,arr+n);
        for (ll i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}