#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll i=ceil(log(n)/log(2)),sum=0;
        while (n>0)
        {
            ll p=pow(2,i);
            sum+=n/p;
            // n=n/pow(2,i);
            n=n%p;
            i--;

        }
        cout<<sum-1<<endl;
        
        
    }
return 0;
}