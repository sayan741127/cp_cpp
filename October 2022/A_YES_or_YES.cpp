#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;

        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i]<'a')
            {
                    s[i]+=32;
            }
            
        }
        // cout<<s<<endl;
        if (s=="yes")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            
        }
        
        
        
    }
return 0;
}