#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        if (a>b)
        {
            swap(a,b);
        }
        
        int temp1 = a;
        int temp2 = b;
        int temp = 0;
        int it = 0;
        while (temp <= n)
        {
            temp = temp1 + temp2;
            temp1 = temp2;
            temp2 = temp;
            it++;
        }
        cout << it << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// // ll fib(ll x){
// //     if (x==0)
// //     {
// //         return 0;
// //     }
// //     else if (x==1)
// //     {
// //         return 1;
// //     }
// //     else
// //     {
// //         return fib(x-1)+fib(x-2);
// //     }
// //     // int i=1;
// //     // int sum;
// //     // while (fib(i)<100)
// //     // {
// //     //     i++;
// //     // }
// //     // return i;

// // }
//         // cout<<fib(41);

// int main(){
//     int t;cin>>t;
//     while(t--){

//         ll a,b,c;
//         cin>>a>>b>>c;

//         vector<ll> v;
//         vector<ll> ans;
//         if (a<b)
//         {
//             swap(a,b);
//         }

//         for (ll i = 0; i < 100000; i++)
//         {
//             v.push_back(a);
//             a=a+b;
//         }
//         for (ll i = 0; i < 100; i++)
//         {
//             ans.push_back(v[i]+v[i+1]);
//         }
//         for (auto i: ans)
//         {
//             cout<<i<<" ";
//         }

//     }
// return 0;
// }

//         // ll a,b,n;
//         // cin>>a>>b>>n;
//         // ll f(ll);
//         // ll f(ll g){
//         // ll g+=b;
//         // return g;
//         // }

//         // for (ll i = 1; i <= 100; i++)
//         // {
//         //     if (a<b)
//         //     {
//         //         swap(a,b);
//         //     }

//         //     if (n<a)
//         //     {
//         //         cout<<i<<endl;
//         //         return 0;
//         //     }
//         //     a+=b;
//         //     f(a+1)=f(a)+f(a-1);
//         //     // b+=a;

//         // }

//         // cout<<min(((n-a+b)/b),((n-b+a)/a))<<endl;