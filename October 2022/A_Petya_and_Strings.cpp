#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    string s,p;
    cin>>s;
    cin>>p;

    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i]<'a')
        {
            s[i]=s[i]-33+'A';
        }
        if (p[i]<'a')
        {
            p[i]=p[i]-33+'A';
        }
        
        if (s[i]<p[i])
        {
            cout<<-1<<endl;
            return 0;
        }
        if (s[i]>p[i])
        {
            cout<<1<<endl;
            return 0;
        }
        
    }

        if (s[i]==p[i])
        {
            cout<<0<<endl;
        }
    // cout<<strcmp(s,p);
    // cout<<s<<endl;
    // cout<<p;
return 0;
}