#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;

    if (s[0]>'4'&&s[0]<'9')
        {
            s[0]='9'-s[0]+'0';
        }
        
    for (ll i = 1; i < s.length(); i++)
    {
        if (s[i]>'4')
        {
            s[i]='9'-s[i]+'0';
        }
        
    }
    cout<<s<<endl;
    
return 0;
}