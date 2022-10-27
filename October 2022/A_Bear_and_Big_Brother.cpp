#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll a,b;
    cin>>a>>b;
    
    for (ll i = 0; i <= 100000; i++)
    {
        if (a<=b)
        {
            a=3*a;
            b*=2;
        }
        else
        {
            cout<<i<<endl;
            return 0;
        }
        
        
    }
    
return 0;
}
    // cout<<ceil(log((b*1.0)/(a*1.0))/log(1.5))<<endl;