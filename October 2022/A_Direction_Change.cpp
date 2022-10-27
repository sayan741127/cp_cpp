#include<bits/stdc++.h> 
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    if(n>m){
        swap(n,m);
    }
    if((n==1 && m>2 )||(n>2 && m==1)){
        cout<<-1<<endl;
        return;
    }


    cout<<((n-1)*2)+((m-n)/2)*4+((m-n)%2)<<endl;

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
return 0;
}