// #include<bits/stdc++.h> 
// using namespace std;
// #define ll long long
// int main(){
//     int t;cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         ll arr[2*n];

//         for (ll i = 0; i < 2*n; i++)
//         {
//             cin>>arr[i];
//         }

//         sort(arr,arr+n);

//         vector<ll> v1;
//         vector<ll> v2;

//         for (ll i = 0; i < n; i++)
//         {
//            v1.push_back( arr[2*i]);
//            v2.push_back( arr[2*i+1]);
        
            
//         }
//         sort(v1.begin(),v1.end());
//         sort(v2.begin(),v2.end());
//         for (ll i = 0; i < n; i++)
//         {
//             cout<<v1[i]<<" ";
//         }
//         cout<<endl;
//         for (ll i = 0; i < n; i++)
//         {
//             cout<<v2[i]<<" ";
//         }
//         cout<<endl;
        
        
        
//     }
// return 0;
// }

#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        vector<ll> v(5,10);
        cout<<v[0]<<" "<<v[4];
    }
return 0;
}