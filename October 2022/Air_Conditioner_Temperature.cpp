#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    for (ll i = 1; i <= 100; i++)
    {
        if (i >= a && i <= b && i >= c)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}