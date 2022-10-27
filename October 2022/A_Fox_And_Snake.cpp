#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll r,c;
    cin>>r>>c;
    char a='#',b='.';
    for (ll i = 1; i <= r; i++)
    {
        for (ll j = 1; j <= c; j++)
        {
            if ((4*i+1)%4==1||(4*i+3)%4==3)
            {
                cout<<a;
            }
            if ((4*i+2)%4==2 && j!=c)
            {
                cout<<b;
            }
            if ((4*i+2)%4==2 && j=c)
            {
                cout<<a;
            }

            if ((4*i+0)%4==0 && j!=1)
            {
                cout<<b;
            }
            
            
            
            
            
        }
        cout<<endl;
        
    }
    
return 0;
}