#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }


        for (int i = 0; i < n; i++)
        {
            int moves;
            cin >> moves;

            if (moves == 0)
            {
                continue;
            }

            string s;
            cin >> s;

            for (int j = 0; j < moves; j++)
            {
                if (s[j] == 'U')
                {
                    arr[i]--;
                }
                else if (s[j] == 'D')
                {
                    arr[i]++;
                }


                if (arr[i] < 0)
                {
                    arr[i] += 10;
                }
                if (arr[i] > 9)
                {
                    arr[i] -= 10;
                }
            }

        }


        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}