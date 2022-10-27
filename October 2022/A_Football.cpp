#include<bits/stdc++.h> 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


#define ll 		long long
#define lll 		__int128_t
#define imx 		__INT_MAX__
#define imn 		__WINT_MIN__
#define fast 		ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb 		push_back
#define f(i, a, b) 	for (ll i = a; i < b; i++)
#define vi 		vector<int>
#define er(a) 		ll a; cin>>a;
#define ee(a,b) 	ll a,b; cin>>a>>b;
#define eee(a,b,c) 	ll a,b,c; cin>>a>>b>>c;
#define vll(v,n) 	vector<ll> v(n); f(i,0,n) cin>>v[i];
#define aa(arr,n) 	ll arr[n]; f(i,0,n) cin>>arr[i];
#define ss(s) 		string(s); cin >> (s);
#define vvll 		vector<vector<ll>>
#define sz(s) 		s.size()
#define mod 		1000000007
#define fr 		first
#define sd 		second
#define inf 		10e15
#define all(x) 		(x).begin(), (x).end()
#define pii 		pair<int, int>
#define mii 		map<int,int>
#define fs(x,y)  	fixed<<setprecision(y)<<x
#define nl 		cout<<endl;
#define R 		return
#define B 		break
#define C 		continue
#define YS 		cout<<"YES"<<"\n"
#define NS 		cout<<"NO"<<"\n"
#define Ys 		cout<<"Yes"<<"\n"
#define Ns 		cout<<"No"<<"\n"
#define lcm(a,b) 	(a/__gcd(a,b))*b
#define prnt(a) 	for(auto e:a)cout<<e<<" ";
const 	 		int N = 1e5 + 5;


void solve() {
    ss(s);
    if (s.size()<7)
    {
        NS;
        R;
    }
    
    for (ll i = 0; i < s.size()-6; i++)
    {
        if ( s.substr(i,7)=="1111111" || s.substr(i,7)=="0000000")
        {
            YS;
            R;
        } 
        // cout<<s.substr(i,7);nl
    }
    NS;
}


int main(){
    fast;

    // int t; cin>>t; while(t--) {
    solve();
    // }

return 0;
}




// ---------------------- Final Approach ---------------------------
/*
    => 
*/


// ---------------------- Brute Force Approach ---------------------
/*
    => ll ans0=1,ans1=0,mx0=-1,mx1=-1;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i]=='1'&&s[i+1]=='1')
        {
            ans0++;
        }
        else
        {
            mx0=max(ans0,mx0);
            ans0=0;
        }
        
        if (s[i]=='0'&&s[i+1]=='0')
        {
            ans1++;
        }
        else
        {
            mx1=max(ans1,mx1);
            ans1=0;
        }
        
    }
    if (mx0>=7 || mx1>=7)
    {
        YS;
    }
    else
    {
        NS;
    }
    
*/

