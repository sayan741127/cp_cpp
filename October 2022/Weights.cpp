#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll w,x,y,z;
        cin>>w>>x>>y>>z;

        if (w==x|| w==y||w==z||w==(x+y)||w==(y+z)||w==(z+x)||w==(x+y+z))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
return 0;
}