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
#define f(i, a, b) for (ll i = a; i < b; i++)
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
    f(i, 0, n) cin >> v[i];
#define aa(arr, n) \
    ll arr[n];     \
    f(i, 0, n) cin >> arr[i];
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
const int N = 1e5 + 5;

int solve()
{
    er(n);

    struct data
    {
        string p;
        ll x, y;
    };

    vector<data> s;

    for (ll i = 0; i < n; i++)
    {
        string str;
        ll xx, yy;
        cin >> str >> xx >> yy;

        s[i].p = str;
        s[i].x = xx;
        s[i].y = yy;
    }

    return s.size();

    //     sort(s.begin(),s.end());
    // ll flag=0;
    //     for (ll i = 0; i < n; i++)
    //     {
    //         for (ll j = 0; j < n; j++)
    //         {
    //             if(s[i].second.second==s[j].second.second && (s[i].first==s[j].first) &&(s[i].second==s[j].second))flag++;
    //         }

    //     }

    // return flag;
}

int main()
{
    fast;

    int t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll answeris = solve();
        cout << "Case #" << i << ": " << answeris << endl;
    }

    return 0;
}