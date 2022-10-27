#include <bits/stdc++.h>
using namespace std;
#define ll long long

int digits(ll m)
{
    ll flag = 0;
    while (m > 0)
    {
        m = m / 10;
        flag++;
    }
    return flag;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll m;
        cin >> m;
        // cout<<digits(m);

        for (ll i = 1; i <= 9; i++)
        {

            if (m == i || m % 10 == i)
            {
                cout << ((i-1) * 10) + (digits(m)*(digits(m)+1)/2) << endl;
                break;;
            }
        }
    }
        return 0;
}
    // vector<ll> v;

    //     for (ll j = 1; j <= 9; j++)
    //     {
    //         ll x=j;
    //             // v.push_back(x);

    //         for (ll k = 1; k <= 4; k++)
    //         {
    //             v.push_back(x);
    //             x=x+(j*pow(10,k));
    //             // cout<<x<<" ";
    //         }

    //     }
    // cout<<v[2];
    // for(auto i:v)cout<<i<<" ";

    // for (ll i = 0; i < 91; i++)
    // {
    //     if (v[i]==m)
    //     {
    //         cout<<i+1<<endl;
    //         return 0;
    //     }

    // }