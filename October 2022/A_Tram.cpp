#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> v;

    for (ll i = 1; i <= n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back(a);
        v.push_back(b);
    }
    // for (auto i: v )
    // {
    //     cout<<i<<" ";
    // }
    

    ll m=v[1]-v[0],max=0;
    
    ll size=v.size();

    for (ll i = 2; i <= (size); i=i+2)
    {
        if (m>max)
        {
            max=m;
        }

        m=m-v[i]+v[i+1];
        // cout<<m<<endl;
        
        if (i==(size))
        {
            cout<<max<<endl;
            return 0;
        }
        
        
    }
    

    return 0;
}

//    ll a,b,c,d;
//    cin>>a>>b;
//    cin>>c>>d;

//    ll m=a+b-c+d,max=0;
//    if (max<m)
//    {
//     max=m;
//    }
//    if (i==n)
//    {
//     cout<<max<<endl;
//    }