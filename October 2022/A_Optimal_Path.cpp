#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a=(m*(m+1)/2)+(m*((n*(n+1)/2)-1));
        cout<<a<<endl;
    }
return 0;
}