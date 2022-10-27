#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll n,r;
    cin>>n>>r;

    for (ll i = 1; i <= r; i++)
    {
        if (n%10!=0)
        {
            n=n-1;
        }
        else
        {
            n=n/10;
        }
        
        
    }
    cout<<n<<endl;
    
return 0;
}