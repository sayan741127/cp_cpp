#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll x,flag=0;cin>>x;

    string s;
    cin>>s;

    for (ll i = 0; i < x; i++)
    {
        if (s[i]==s[i+1])
        {
                flag++;
        }
        
    }
    cout<<flag<<endl;
    
return 0;
}