#include<bits/stdc++.h> 
using namespace std;
#define ll long long

ll num(string s){
    ll flag=1;

    for (ll i = 0; i < s.size(); i++)
    {
        // if ((s[i]>'A'&&s[i]<'Z')||(s[i]>'a'&&s[i]<'z'))
        if (s[i]==32)
        {
        
            flag++;
        }
        
    }

    return flag;
    
}


int main(){

   
    vector<string> v;
    ll n; 
    cin>>n;
    ll arr[n];

    // string s;
    // stdin(fflush);
    fflush(stdin);
    // getline(cin,s);
    // cout<<s<<endl;
    // v.push_back(s);
    // cout<<num(s)<<endl;
    // cout<<num(v[0])<<endl;





    for (ll i = 0; i < n; i++)
    {
        string s;
        // cin>>s;
        getline(cin,s);
        
        v.push_back(s);
    }
        // cout<<num(v[0]);
    
    for (ll i = 0; i < v.size(); i++)
    {
        ll x=num(v[i]);
        arr[i]=x;
    }

    sort(arr,arr+n);

    cout<<arr[n-1]<<endl;
    
    
return 0;
}



