#include<bits/stdc++.h> 
using namespace std;
#define ll long long
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

        ll sum=0;

        for (ll i = 0; i < n; i++)
        {
            if (arr[i]>arr[0])
            {
                sum=sum+(arr[i]-arr[0]);
            }
            
        }
        
        cout<<sum<<endl;
        // cout<<arr[0]<<endl;
        
    }
return 0;
}