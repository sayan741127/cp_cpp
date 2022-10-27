#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll flag = 0;
    for (ll i = 0; i < n; i++)
    {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            flag = 0;
        }
        else
        {
            flag++;
        }
        /*
        If I get i is equal to any vowel, i set flag to 0.
        if not then Increase by 1.
        when i get flag is 4, print no
        */
        if (flag == 4)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES"  << endl;
    return;
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

