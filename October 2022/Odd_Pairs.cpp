#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n;

        cin>>n;

        if (n%2==0)
        {
            cout<<n*n/2<<endl;
        }
        else
        {
            cout<<2*(n/2)*((n+1)/2)<<endl;
        }
        
    }
return 0;
}