#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll a[n];
    ll flag=0;

    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
       
        
    }
    ll maxx=-1;
    for (ll i = 0; i+1 < n; i++)
    {
        if (a[i+1]>a[i])
        {
            flag++;
            

        }
        else
        {   
            maxx=max(maxx,flag+1);
            flag=0;
        }
        
        
    }
    maxx=max(maxx,flag+1);
    cout<<maxx<<endl;
    
    
return 0;
}