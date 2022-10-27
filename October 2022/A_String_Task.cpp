#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
        {
            s.erase(i,1);
            i--;
        }
        
        
    }
    for (ll i = 0; i < s.length(); i++)
    {
        
        if (s[i]<'a')
        {
            s[i]=s[i]+32;
        }
  
    }
    // for (ll i = 0; i < s.length(); i++)
    // {
    //     if (s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
    //     {
    //         s.erase(i,1);
    //     }
  
    // }
    // for (ll i = 0; i < s.length(); i++)
    // {
    //     if (s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
    //     {
    //         s.erase(i,1);
    //     }
  
    // }
    // for (ll i = 0; i < s.length(); i++)
    // {
    //     if (s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
    //     {
    //         s.erase(i,1);
    //     }
  
    // }
    // for (ll i = 0; i < s.length(); i++)
    // {
    //     if (s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
    //     {
    //         s.erase(i,1);
    //     }
  
    // }
    // for (ll i = 0; i < s.length(); i++)
    // {
    //     if (s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
    //     {
    //         s.erase(i,1);
    //     }
  
    // }
    for (ll i = 0; i < s.length(); i++)
    {
        cout<<"."<<s[i];
    }
    
    
return 0;
}