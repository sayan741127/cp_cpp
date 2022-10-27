#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;

        deque<ll> q;

        for (ll i = 1; i <= n; i++)
        {
            if (i%2==0)
            {
                q.push_front(i);
            }
            else
            {
                q.push_back(i);
            }
            
            
        }

        for (auto i: q)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
return 0;
}