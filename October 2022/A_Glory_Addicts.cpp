#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


template<class T> using oset = tree<T,null_type,less<T>, rb_tree_tag, tree_order_statistics_node_update>;


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
    er(n);
    vll(ty,n);
    vll(nm,n);
    vector<ll> a,b;
    for (ll i = 0; i < n; i++)
    {
       if (ty[i]==0)
       {
        a.pb(nm[i]);
       }
       else
       {
        b.pb(nm[i]);
       }  
    }
    sort(all(a));
    sort(all(a),greater<ll>());
    ll ans=0;
    for (ll i = 0; i < min(a.size(), sz(b)); i++)
    {
        if (a[i]==0 && b[i]==1)
        {
            ans+=a[i]+2*b[i];
        }  
    }
    for (ll i = min(a.size(), sz(b)); i < max(a.size(), sz(b)); i++)
    {
        if (a.size()> sz(b))
        {
            ans+=a[i];
        }  
        else
        {
            ans+=b[i];
        }
        
    }
    cout<<ans<<endl;
    
}


int main(){
    fast;

    int t; cin>>t; while(t--) {
    solve();
    }

return 0;
}




// ---------------------- Final Approach ---------------------------
/*
    => 
*/


// ---------------------- Brute Force Approach ---------------------
/*
    => 
*/

