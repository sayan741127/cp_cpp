#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        
        if ((a-c)<(b-d))
        {
            cout<<"First"<<endl;
        }
        else if ((a-c)>(b-d))
        {
            cout<<"Second"<<endl;
        }
        else
        {
            cout<<"Any"<<endl;
            
        }
        
        
    }
return 0;
}