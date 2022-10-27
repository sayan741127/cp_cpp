#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll power=1;

        vector<ll> arr;
        while (n>0)
        {
            if(n%10>0){
                arr.push_back((n%10)*power);
            }
            n/=10;
            power*=10;

        }
        cout<<arr.size()<<endl;
        for(auto j: arr){
            cout<<j<<" ";
        }
        cout<<endl;
        

    }
return 0;
}