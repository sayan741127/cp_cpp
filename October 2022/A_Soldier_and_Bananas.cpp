#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll k,n,w;
    cin>>k>>n>>w;
    if (k*(w*(w+1)/2)-n>=0)
    {
        cout<<k*(w*(w+1)/2)-n<<endl;
        return 0;
    }
    
    cout<<0<<endl;
return 0;
}