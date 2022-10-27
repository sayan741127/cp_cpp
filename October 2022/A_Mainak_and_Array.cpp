#include<bits/stdc++.h> 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<class T> using oset = tree<T,null_type,less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define er(a) ll a; cin>>a;
#define ee(a,b) ll a,b; cin>>a>>b;
#define eee(a,b,c) ll a,b,c; cin>>a>>b>>c;
#define vll(v,n) vector<ll> v(n); fl(i,0,n) cin>>v[i];
#define aa(arr,n) ll arr[n]; fl(i,0,n) cin>>arr[i];
#define ss(s) string(s); cin >> (s);
#define vvll vector<vector<ll>>
#define sz(s) s.size()
#define mod 1000000007
#define fr first
#define sd second
#define inf 10e15
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define mii map<int,int>
#define fs(x,y)  fixed<<setprecision(y)<<x
#define nl cout<<endl;
#define R return
#define B break
#define C continue
#define YS cout<<"YES"<<"\n"
#define NS cout<<"NO"<<"\n"
#define Ys cout<<"Yes"<<"\n"
#define Ns cout<<"No"<<"\n"
const int N = 1e5 + 5;


void solve() {
    er(n);
		
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		
		if (n == 1) {
			cout << 0 << endl;
			R;
		}
		
		int output = 0;
		for (int i = 0; i < n; i++) {
			output = max(output, a[i] - a[(i + 1) % n]); //Chosen subarray contains an and  a1
		}
		
		output = max(output, *max_element(a + 1, a + n) - a[0]); //Chosen subarray doesn't contain a1
		output = max(output, a[n - 1] - *min_element(a, a + (n - 1))); //Chosen subarray doesn't contain an
		
		cout << output << endl;

	
	
}


int main(){
    fast;

    int t; cin>>t; while(t--) {
    solve();
    }

return 0;
}

// oset<ll> s;
// 	for (ll i = 0; i < 8; i++)
// 	{
// 		s.insert(i+1);
// 	}
// 	for (auto i =s.begin() ; i !=s.end(); i++)
// 	{
// 		cout<<"Value at index "<<*s.find_by_order(*i-2)<<s.order_of_key(*i-2)<<" is "<<*i<<" ";
// 	}
// 	nl;