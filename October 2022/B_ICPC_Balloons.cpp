#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll x;
        cin>>x;

        fflush(stdin);

        

        ll flag=0;


        char s[x];

        for (ll i = 0; i < x; i++)
        {
            cin>>s[i];
        }
        
        sort(s,s+x);

        for (ll i = 0; i < x-1; i++)
        {
            if (s[i]==s[i+1])
            {
                    flag++;
            }
            else{
                flag+=2;
            }
            
        }
        
        

        cout<<flag+2<<endl;

        fflush(stdout);
        
    }
return 0;
}