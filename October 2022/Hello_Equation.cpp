#include <bits/stdc++.h>
using namespace std;
#define ll long long

string div(ll b)
{
    for (ll i = 1; i*i <= b; i++)
    {   
        if ((b-2.0*i)!=0)
        {
            
        // float n=((b-2.0*i)/(2.0+i));
        // ll m=((b-2.0*i)/(2.0+i));
        
            if (((b-2*i)%(2+i))==0)
            { 
                
                return "YES";
            }
        }
        
    }
    
    return "NO";
}


// string div(ll b)
// {
//     for (ll i = 1; i <= b; i++)
//     {
//         for (ll j = 1; j <= b; j++)
//         {
//             if (2 * i + 2 * j + i * j == b)
//             {
//                 // cout << "YES" << endl;
//                 return "YES";
//             }
//         }
//     }
//     // cout << "NO" << endl;
//     return "NO";
// }


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        cout << div(x) << endl;
    }
    return 0;
}