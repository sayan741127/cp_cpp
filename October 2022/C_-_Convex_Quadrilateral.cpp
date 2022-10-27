#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define er(a) \
    ll a;     \
    cin >> a;
#define ee(a, b) \
    ll a, b;     \
    cin >> a >> b;
#define eee(a, b, c) \
    ll a, b, c;      \
    cin >> a >> b >> c;
#define vll(v, n)    \
    vector<ll> v(n); \
    fl(i, 0, n) cin >> v[i];
#define aa(arr, n) \
    ll arr[n];     \
    fl(i, 0, n) cin >> arr[i];
#define ss(s)  \
    string(s); \
    cin >> (s);
#define vvll vector<vector<ll>>
#define sz(s) s.size()
#define mod 1000000007
#define fr first
#define sd second
#define inf 10e15
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define mii map<int, int>
#define fs(x, y) fixed << setprecision(y) << x
#define nl cout << endl;
#define R return
#define B break
#define C continue
#define YS cout << "YES" \
                << "\n"
#define NS cout << "NO" \
                << "\n"
#define Ys cout << "Yes" \
                << "\n"
#define Ns cout << "No" \
                << "\n"
#define pi 3.14159
const int N = 1e5 + 5;

void solve()
{
    ll a, b, c, d, e, f, g, h;
    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;
    cin >> g >> h;

    // ll ang1 = abs(tan((h - b) / (g - a)) - tan((d - b) / (c - a)));
    // ll ang2 = abs(tan((b - d) / (a - c)) - tan((f - d) / (e - c)));
    // ll ang3 = abs(tan((d - f) / (e - c)) - tan((h - f) / (g - e)));
    // ll ang4 = abs(tan((f - h) / (e - g)) - tan((b - h) / (a - g)));

    // if (ang1 < pi && ang2 < pi && ang3 < pi && ang4 < pi)
    // {
    //     Ys;
    //     R;
    // }
    // Ns;
    cout<<atan(-1)-atan(-1)<<endl;
    cout<<pi/2<<endl;
   
    
}

int main()
{
    fast;

    // int t; cin>>t; while(t--) {
    solve();
    // }

    return 0;
}