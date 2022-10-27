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
#define f(i, v, brr) for (int i = v; i < brr; i++)
#define vi vector<int>
#define er(v) \
    ll v;     \
    cin >> v;
#define ee(v, brr) \
    ll v, brr;     \
    cin >> v >> brr;
#define eee(v, brr, c) \
    ll v, brr, c;      \
    cin >> v >> brr >> c;
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
const int N = 1e5 + 5;

void solve()
{
    er(n);
    vector<int> v(n);
    for (auto &i: v) cin >> i;
    cout << max_element(v.begin(), v.end()) - v.begin() + 1 <<endl;
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}