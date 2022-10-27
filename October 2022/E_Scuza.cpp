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
    int n,q; cin >> n >> q;
    ll arr[n], sum[n], req[n], k;
    for(int i=0; i<n; i++)
       cin >> arr[i];
       
    sum[0] = req[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        req[i] = max(arr[i],req[i-1]);
        sum[i] = sum[i-1]+arr[i];
    }
    
    while(q--)
    {
        cin >> k;
        int i = upper_bound(req, (req+n), k) - req;
        if(i==0)
          cout << "0 ";
        else
          cout << sum[i-1] << " ";
    }
    
    cout << endl;
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
    => ee(n,q);
    ll arr[n],req[n],sum[n];
    for (ll i = 0; i < n; i++)
    {
        er(x);
        arr[i]=(x);
    }
    req[0]=sum[0]=arr[0];
    for (ll i = 1; i < n; i++)
    {
        sum[i]=sum[i-1]+arr[i];
        req[i]=max(arr[i],arr[i-1]);
    }
    for (ll i = 0,k; i < q; i++)
    {
        cin>>k;
        ll index=upper_bound(req,req+n,k)-req;
        if (index==0)
        {
            cout<<"0 ";
        }
        else
        {
            cout<<sum[index-1]<<" ";
        }
    }
    nl;
*/

