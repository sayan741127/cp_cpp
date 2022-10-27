#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;

    string s;
    cin>>s;

    cout<<s[0];
    ll m=(sqrt(8*n+1)-1)/2;

    for (ll i = 1; i < m; i++)
    {
        cout<<s[i*(i+1)/2];
    }
    
return 0;
}