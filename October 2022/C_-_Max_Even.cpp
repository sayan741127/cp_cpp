#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define lll __int128_t
#define imx __INT_MAX__
#define imn __WINT_MIN__
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
#define lcm(a, b) (a / __gcd(a, b)) * b
#define prnt(a)      \
    for (auto e : a) \
        cout << e << " ";
const int N = 1e5 + 5;

void solve()
{
    er(n);
    vector<ll> od, evn;
    for (ll i = 0; i < n; i++)
    {
        er(x);
        if (x & 1)
        {
            od.pb(x);
        }
        else
        {
            evn.pb(x);
        }
    }
    // cout<<od.size()<<" "<<sz(evn);
    sort(all(od));
    sort(all(evn));

    ll ans_od = 0, ans_evn = 0;

    if (od.size() >= 2)
    {
        ans_od = od[od.size() - 1] + od[od.size() - 2];
    }
    if (evn.size() >= 2)
    {
        ans_evn = evn[evn.size() - 1] + evn[evn.size() - 2];
    }

    if (od.size() < 2 && evn.size() < 2)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(ans_od, ans_evn) << endl;
    }
}

int main()
{
    fast;

    // int t; cin>>t; while(t--) {
    solve();
    // }

    return 0;
}

//------------------brute force ------------
// vll(v, n);
// vector<ll> w;
// for (ll i = 0; i < n; i++)
// {
//     for (ll j = i + 1; j < n; j++)
//     {
//         if (((v[i] + v[j]) % 2 == 0))
//         {
//             w.push_back((v[i] + v[j]));
//         }
//     }
// }
// if (w.size() != 0)
// {

//     cout << *max_element(w.begin(), w.end()) << endl;
// }
// else
// {
//     cout << -1 << endl;
// }

