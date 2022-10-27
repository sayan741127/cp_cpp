#include<bits/stdc++.h> 
using namespace std;


#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




void solve() {
    ll n;
    cin>>n;
    string s,p;
    cin>>s;
    cin>>p;


    for (ll i = 0; i < n; i++)
    {
        if (s[i]=='R' && (p[i]=='G' || p[i]=='B'))
        {
            cout<<"NO"<<endl;
            return;

        }
        if (p[i]=='R' && (s[i]=='G' || s[i]=='B'))
        {
            cout<<"NO"<<endl;
            return;

        }
        
    }
    cout<<"YES"<<endl;


}


int main(){
    fast;

    int t; cin>>t; while(t--) {
    solve();
    }

return 0;
}