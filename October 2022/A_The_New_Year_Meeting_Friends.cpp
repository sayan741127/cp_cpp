#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll arr[3];
    for (ll i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+3);
    cout<<arr[2]-arr[0]<<endl;
    // cout<<arr[0];
    
return 0;
}