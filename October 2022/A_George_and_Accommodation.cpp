#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;

    ll flag=0;

    for (ll i = 0; i < n; i++)
    {
        ll a,b;
        cin>>a>>b;
        if (b-a>=2)
        {
            flag++;
        }
        
    }

    cout<<flag<<endl;
    
return 0;
}