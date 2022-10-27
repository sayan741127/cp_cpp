#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    // set<char> set;
    string s;
    cin>>s;
    ll z=s.size();
    
    vector<ll> v;

    for (ll i = 0; i < z; i+=2)
    {
        v.push_back(s[i]);
    }

    sort(v.begin(),v.end());

    for (ll j = 0; j < v.size(); j++)
    {   
        char m=v[j];
        cout<<m;
        // for (ll k = 0; k < v.size(); k+=2)
        if(j!=v.size()-1)
        {
            cout<<"+";
        }
        

    }
    


    // for (ll i = 0; i < s.size(); i+=2)
    // {
    //     set.insert(s[i]);
    // }
    
    // for (set<char>::iterator   it = set.begin(); it !=set.end(); it+=1)
    // for(auto it : set)
    // {
    //     cout<<it;
    //     for (ll j = 1; j < set.size(); j+=2)
    //     {
    //         cout<<"+";
    //     }
        
    // }
    

return 0;
}