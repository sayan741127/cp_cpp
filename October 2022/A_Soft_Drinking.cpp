#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll n,k,l,c,d,p,x,y;
    cin>>n>>k>>l>>c>>d>>p>>x>>y;
    cout<<min(min((k*l)/x,(c*d)),min((c*d),p/y))/n<<endl;
    // ll x=5,y=10,z=15;
    // cout<<min(min(x,y),min(y,z))<<endl;

return 0;
}