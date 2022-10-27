// #include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;

// #define ll long long
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define pb push_back
// #define f(i, a, b) for (int i = a; i < b; i++)
// #define vi vector<int>
// #define er(a) ll a; cin>>a;
// #define ee(a,b) ll a,b; cin>>a>>b;
// #define eee(a,b,c) ll a,b,c; cin>>a>>b>>c;
// #define vll(v,n) vector<ll> v(n); fl(i,0,n) cin>>v[i];
// #define aa(arr,n) ll arr[n]; fl(i,0,n) cin>>arr[i];
// #define ss(s) string(s); cin >> (s);
// #define vvll vector<vector<ll>>
// #define sz(s) s.size()
// #define mod 1000000007
// #define fr first
// #define sd second
// #define inf 10e15
// #define all(x) (x).begin(), (x).end()
// #define pii pair<int, int>
// #define mii map<int,int>
// #define fs(x,y)  fixed<<setprecision(y)<<x
// #define nl cout<<endl;
// #define R return
// #define B break
// #define C continue
// #define YS cout<<"YES"<<"\n"
// #define NS cout<<"NO"<<"\n"
// #define Ys cout<<"Yes"<<"\n"
// #define Ns cout<<"No"<<"\n"
// const int N = 1e5 + 5;

// void solve() {
//     ll n;
//     cin>>n;

//     string s;
//     cin>>s;

//     vector<ll> v,ans;

//     int score =0;
//     for (ll i = 0; i < n; i++)
//     {
//         if (s[i]=='L')
//         {
//             score+=i;
//         }
//         else
//         {
//             score+=(n-1-i);
//         }

//         if (s[i]=='L' && (i<(n-1-i)))
//         {
//             v.push_back(n-1-2*i);
//         }
//         else if (s[i]=='R'&&i>(n-i-1))
//         {
//             v.push_back(2*i+1-n);
//         }

//     }

//     sort(v.rbegin(),v.rend());

//     ll sum=0;
//     for (ll i = 0; i < v.size(); i++)
//     {
//         sum+=v[i];
//         ans.push_back(score+sum);
//     }

//     for(int x: ans)cout<<x<<" ";
//     cout<<endl;

// }

// int main(){
//     fast;

//     int t; cin>>t; while(t--) {
//     solve();
//     }

// return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    __int128_t n;
    cin >> n;
    while (true)
    {
        cout << n << " ";
        if (n == 1)
            break;
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    }
    cout << "\n";
}
