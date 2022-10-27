#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll n,h,flag=0;
    cin>>n>>h;

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];

        if (arr[i]>h)
        {
            flag++;
        }
        
    }

    cout<<n+flag<<endl;

    
    
return 0;
}