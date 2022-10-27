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
        ee(l, r);
    ll sl = floor(sqrtl(l));
    ll sr = floor(sqrtl(r));
    ll y = ceil(l / sl);
    if ((l % sl) == 0)
    {
        y--;
    }
    ll x = (r / sr);
    cout << ((sr - sl - 1) * 3) + (x - sr + 1) + ((((sl + 1) * (sl + 1) - 1) / sl) - y) << endl;
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
        => দীর্ঘ-দীর্ঘ-পূর্ণসংখ্যার জন্য sqrtl ব্যবহার করুন
        An integer x is called a luxurious number if it is divisible by floor of root of x
        আমাকে এমন নাম্বার বার করতে হবে, যে নাম্বার নিজের স্কয়ার রুটের গ্রেটেস্ট ইন টিজার দ্বারা ডিভিসিবল।
        L থেকে R পর্যন্ত প্রতিটি নাম্বারের রুট যদি আমি নিই, তাহলে পরপর নাম্বারই পাব।
        অর্থাৎ আমাকে ওই রেঞ্জের মধ্যে রুট গুলির মাল্টিপেল খুঁজে বার করতে হবে।
        ১ থেকে ৩০ এর মধ্যে তিনের মাল্টিপল কতগুলি আছে? দশটা। কি করে পেলাম? ৩০ কে ৩ দিয়ে ভাগ করলে পাই।
        ১০ থেকে ৩০ এর মধ্যে তিনের কতগুলি মাল্টিপল হবে?
        ১ থেকে ৩০ পর্যন্ত যা হবে, বিয়োগ, এক থেকে দশ পর্যন্ত যা হবে।
        কিন্তু আমাকে এখানে শুধু স্কয়ার গুলির মধ্যেকার মাল্টিপল খুঁজতে হবে। যেমন ৯ আর ১৬ র মধ্যে 3 এর মাল্টিপল তিনটে।
        আমি l and r এর রেঞ্জ কে তিন ভাগে ভাগ করলাম।
        L থেকে পরবর্তী স্কোয়ার পর্যন্ত, (৯ কমা ১৬ কমা ২৫) , r এর এর সবথেকে কাছের স্কয়ার, মধ্যবর্তী স্কয়ার
        এই রেঞ্জের মধ্যে থাকা সমস্ত মাল্টিপল আমাকে খুঁজে বার করতে হবে
        ((sr - sl - 1) * 3) => মধ্যবর্তী স্কয়ারগুলিতে তিনটে সংখ্যা এমন হবে
        
        (a+1)^2 - 1 = a*(a+2)
        every half-closed segment [a^2,(a+1)^2) contains exactly 3 luxurious number: a^2, a^(a+1) and a^(a+2).
        (x - sr + 1) => for upper ranges
        ((((sl + 1) * (sl + 1) - 1) / sl) - y) => for lower ranges
    */

   
    // ---------------------- Brute Force Approach ---------------------
    /*
        => একটা for loop লাগিয়ে প্রত্যেকটি এলিমেন্টকে পরীক্ষা করো যে প্রদত্ত কন্ডিশনটি স্যাটিসফাই করছে কিনা
            ll flag=0;
            for (ll i = l; i <= r; i++)
            {
                ll x=floor(sqrt(i));
                    // cout<<x<<" ";
                if ((i%x)==0)
                {
                    cout<<i<<" ";
                    // flag++;
                }

            }
    */

