#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int total_time_of_B;
    cin >> total_time_of_B;
    while (total_time_of_B--)
    {
        ll n;
        cin >> n;

        ll time_of_station[n - 1];
        for (ll i = 0; i < n - 1; i++)
        {
            cin >> time_of_station[i];
        }

        ll total_time_of_B = time_of_station[0], time_taken_by_A = time_of_station[0];

        for (ll i = 0; i <= n - 2; i++)
        {
            if (time_taken_by_A > total_time_of_B)
            {
                total_time_of_B = total_time_of_B + (time_taken_by_A - total_time_of_B);
            }
            total_time_of_B = total_time_of_B + time_of_station[i];

            time_taken_by_A = time_taken_by_A + time_of_station[i + 1];

            // cout<<total_time_of_B<<" "<<time_taken_by_A<<endl;
        }
        cout << total_time_of_B << endl;
    }
    return 0;
}