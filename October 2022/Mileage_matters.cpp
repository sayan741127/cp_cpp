#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        float n,x,y,a,b;
        cin>>n>>x>>y>>a>>b;

        float p=(n/a)*x,d=(n/b)*y;

        if (p<d)
        {
            cout<<"PETROL"<<endl;
        }
        if(d<p)
        {
            
            cout<<"DIESEL"<<endl;
        }
        if(d==p)
        {
            
            cout<<"ANY"<<endl;
        }

        
        


    }
return 0;
}