#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    
    vector<char> v;
    for (ll i = 0; i < 5; i++)
    {   
        char a,b;
        cin>>a>>b;
        v.push_back(a);
        v.push_back(b);
    }
    
    // for(auto i: v)cout<<i;
    // cout<<s[0]<<s[1];

    for (ll i = 0; i < 10; i++)
    {
        if (v[i]==s[0]||v[i]==s[1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
        
    }
    
    cout<<"NO"<<endl;
    
return 0;
}