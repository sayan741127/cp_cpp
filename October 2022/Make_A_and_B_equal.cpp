#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        // ------------ input -----------
        ll n;
        cin >> n;

        ll a[n], b[n], max_ab[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // --------------- logic -----------------

        /*
        We have given to array. I am taking an array
        Which stores the maximum of the i-th index
        Both of the array.

        I actually the array, i have made stores the
        Maximum level that is upper bound up to each which
        the array will go to be equal.

        456 = sum is 18
        576 = sum is 18

        you can add +1 to both of them, after addition their sum will also remail same

        max of ith index of them = 5 7 8 = sum is 20 ,
        which is the form of the final array, being equalise

        now (ans= 20 - sum of first array) == 20 - sum of second array,
        then print ans, else -1
        */

        for (ll i = 0; i < n; i++)
        {
            max_ab[i] = max(a[i], b[i]);
        }

        ll difference_sum_of_a = 0, difference_sum_of_b = 0;

        for (ll i = 0; i < n; i++)
        {
            difference_sum_of_a += (max_ab[i] - a[i]);
            difference_sum_of_b += (max_ab[i] - b[i]);
        }

        (difference_sum_of_a == difference_sum_of_b) ? cout <<difference_sum_of_a:cout<<-1;
        cout<<endl;
    }
    return 0;
}