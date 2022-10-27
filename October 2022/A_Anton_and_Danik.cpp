#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    string s;
    cin>>s;

    ll flag=0,count=0;

    for (ll i = 0; i < t; i++)
    {
        if (s[i]=='A')
        {
            flag++;
        }
        if (s[i]=='D')
        {
            count++;
        }
        
        
    }

    if (flag>count)
    {
        cout<<"Anton"<<endl;
    }
    else if (flag<count)
    {
        cout<<"Danik"<<endl;
        
    }
    else
    {
        cout<<"Friendship"<<endl;
        
    }
    
    
    
    
return 0;
}