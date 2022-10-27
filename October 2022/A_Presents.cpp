#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    pair<ll,ll> arr[n];

    for (ll i = 0; i < n; i++)
    {
        arr[i].second=i+1;
        cin>>arr[i].first;
    }
    sort(arr,arr+n);
    for (ll i = 0; i < n; i++)
    {
        cout<<arr[i].second<<" ";
    }
    
return 0;
}
