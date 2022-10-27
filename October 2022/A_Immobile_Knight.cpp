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
    
    int n, m;
		scanf("%d%d", &n, &m);
		int svx = 1, svy = 1;
		for (int x = 1; x <= n; ++x){
			for (int y = 1; y <= m; ++y){
				bool ok = true;
				for (int dx : {-2, -1, 1, 2}){
					for (int dy : {-2, -1, 1, 2}){
						if (abs(dx * dy) != 2) continue;
						if (1 <= x + dx && x + dx <= n && 1 <= y + dy && y + dy <= m)
							ok = false;
					}
				}
				if (ok){
					svx = x;
					svy = y;
				}
			}
		}
		printf("%d %d\n", svx, svy);
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
    ee(n,m);
    if (n==1 || m==1)
    {
        cout<<min(n,m)<<" "<<max(n,m)<<endl;
    }
    else if (n>=4 && m>=4)
    {
        cout<<1<<" "<<1<<endl;
    }
    else if ((n==2&& m==2)|| (n==2&& m==3) ||(n==3&& m==3))
    {
        cout<<floor(n/2)+1<<" "<<floor(m/2)+1<<endl;
    }
    else
    {
        cout<<1<<" "<<1<<endl;
    }
*/


// ---------------------- Brute Force Approach ---------------------
/*
    => 
*/

