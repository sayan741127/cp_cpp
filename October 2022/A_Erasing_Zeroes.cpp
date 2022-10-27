#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll r=0,s=0;
        string str;
        cin>>str;

        for (ll i = 0; i < str.size(); i++)
        {
            if (str[i]=='1')
            {
                r=i;
                break;
            }
            
        }
        
        for (ll i = str.size()-1; i>=0; i--)
        {
            if (str[i]=='1')
            {
                s=i;
                break;
            }
            
        }
        // cout<<r<<" "<<s<<endl;

        // cout<<abs(s-r-1)<<endl;
        ll flag=0;
        
        for (ll i = r+1; i < s; i++)
        {
            if (str[i]=='0')
            {
                flag++;
            }
            
        }
        cout<<flag<<endl;
        
        
        
    }
return 0;
}
        // vector<ll> v;
        // stack<int> v;
        // vector<ll> v;
        // queue<int> q;
        // for (ll i = 0; i < str.size(); i++)
        // {
        //     if (str[i]=='1'&&str[i+1]=='0')
        //     {
        //         r=i;
        //     }
        //     if (str[i]=='0'&&str[i+1]=='1')
        //     {
        //         if (i>r)
        //         {
        //             s=i+1;
        //             v.push_back(s-r-1);
        //         }
                
        //     }
  
        // }
        // sort(v.begin(),v.end());
        // v.push_back(0);
        // cout<<v[0]<<endl;