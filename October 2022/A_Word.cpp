#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;

    ll num_upper_case=0,num_lower_case=0;

    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i]<'a')
        {
            num_upper_case++;
        }
        if (s[i]>'Z')
        {
            num_lower_case++;
        }
        
        
    }
// cout<<num_lower_case<<" "<<num_upper_case<<endl;
    if (num_lower_case>=num_upper_case)
    {
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i]<'a')
            {
                s[i]=s[i]+32;
            }
            
        }
        
    }
    else
    {
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i]>'Z')
            {
                s[i]=s[i]-32;
            }
            
        }
    }

    cout<<s<<endl;
    
    
    
    
return 0;
}