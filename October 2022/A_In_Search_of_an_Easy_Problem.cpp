#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    ll arr[t];
    for (ll i = 0; i < t; i++)
    {
        cin>>arr[i];
        if (arr[i]==1)
        {
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    
    cout<<"EASY"<<endl;
    
    
return 0;
}