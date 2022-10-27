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
    ee(n,k)
    vll(v,n);
    

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
    => sliding window brute force
    ee(n,k)
    vll(v,n);
    ll mx=imn,c=0;
    for (ll i = 0; i < n-k+1; i++)
    {   
        c=0;
        for (ll j = 0; j < k; j++)
        {
            c+=v[i+j];
        }
        mx=max(mx,c);
        // cout<<mx<<endl;
    }
    cout<<v[n-1]<<endl;
    যখন i equal to 0, তখন শুধুমাত্র k খানা বক্সের নম্বর যোগ করবে। 
    এরপরে আমাকে ওই সাইজের বাক্সকে এক ঘর এগোতে হবে।
    তাই আমি প্রত্যেকটি ইনডেক্সের সঙ্গে i যোগ করলাম।
    বক্স সরতে থাকবে কতদূর পর্যন্ত? 
    যতক্ষণ না ইনডেক্স n-1 হচ্ছে।
    বাইরের for loop যাবে n-k পর্যন্ত এবং ভেতরেরটি যাবে k-1 পর্যন্ত। 
    Total, n-k+k-1 = n-1 
    অর্থাৎ দেখা যাচ্ছে শেষ সংখ্যা পর্যন্ত বাক্সটি স্লাইড করতে থাকবে।
*/

