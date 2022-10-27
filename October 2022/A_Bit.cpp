#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    ll x=0;
    while(t--){
        
        string s;
        cin>>s;
        if (s=="++X"||s=="X++") 
        {
           x++;
        }
        else
        {
            x--;
        }
        
        
    }
    cout<<x<<endl;
return 0;
}

