#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        map<ll, ll> m;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }

        int sob_theke_boro_num = 0, max_num_er_sonkha = 0;
        for (auto &i : m)
        {
            if (i.second > sob_theke_boro_num)
            {
                sob_theke_boro_num = i.second;
                max_num_er_sonkha = 1;
            }
            else if (i.second == sob_theke_boro_num)
            {
                max_num_er_sonkha++;
            }
        }
        if (max_num_er_sonkha == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        
    }
    return 0;
}
