

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
    ee(n,k);
    ss(s);
    vector<ll> v(n+1);
    v[0]=0;

    // এটা হল আমার prefix sun array ।
    //যেখানে আমি শুধু সাদার সংখ্যা ধরে রাখছি।

    for (ll i = 1; i <= n; i++)
    {
        v[i]=v[i-1]+(s[i-1]=='W');
    }

    // যেহেতু k এর বেশি সাদা কে আমায় কাল করতে হবে না।
    ll ans=k;

    //এটা হলো আমার sliding window technique। 
    // যাতে আমি সমস্ত k size বাক্সের সাদার সংখ্যা তুলনা করেছি।
    // Length of my window i-(i-k)=k
    for (ll i = k; i <= n; i++)
    {
        ans=min(ans,v[i]-v[i-k]);
    }
    // K এবং আমার প্রতিটি বাক্সের সাদার সংখ্যার মধ্যে যেটি সর্বনিম্ন হবে, সেটাই আমার উত্তর।
    cout<< ans<<endl;
    
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
    => যতগুলো সাদা আছে ততগুলো আমি prefix sun নিলাম। 
    ধরে নিলাম সর্বোচ্চ কে উত্তর হবে। 
    সর্বোচ্চ উত্তর এবং প্রিফিক্স সামে ওই ইনটেক্স পর্যন্ত যতগুলি সাদা আছে,
     ততগুলি সাদাকে আমায় কালো করতে হবে। 
     এর মধ্যে মিনিমাম যে সেটাই আমার উত্তর।

    ee(n,k);
    ss(s);
    ll arr[n]={0};
    ll cnt=0;
    for (ll i = 0; i < k; i++)
    {
        if (s[i]=='W')
        {
            cnt++;
        }
        arr[i]=cnt;
    }

    for (ll i = k; i < n; i++)
    {
        if (s[i]=='W')
        {
            cnt++;
        }
        cnt-=arr[i-k];
        
        arr[i]=cnt;
        
    }
    ll ans=imx;
    for (ll i = k-1; i < n; i++)
    {
        ans=min(ans,arr[i]);
    }
    cout<<ans<<endl;

*/


// ---------------------- Brute Force Approach ---------------------
/*
    => ll ans = k;
    ll count = 0;
    for (ll i = 0; i < k; i++)
    {
        count += (s[i] == 'B');
    }
    for (ll i = k; i < n; i++)
    {
        ans = min(ans, k - count);
        count += (s[i] == 'B');
        count -= (s[i - k] == 'B');
    }
    ans = min(ans, k - count);
    cout << ans << "\n";

     উত্তর সর্বোচ্চ k হতে পারে। কারণ এর বেশি সাদা আমার লাগবে না। প্রথমে যতগুলো কালো আছে সেটা গুনে নিলাম। 
     K এর পর যতগুলো কালো পাব, তত বেশি কম লাগবে এবং এক থেকে যতগুলো কালো পাব, তত বেশি সাদা লাগবে। 
     তাই যতটা বেশি উত্তর হতে পারে এবং যতগুলো কালো পেয়েছি, তার মধ্যে যেটা সর্বনিম্ন, সেটাই আমার উত্তর।
*/

