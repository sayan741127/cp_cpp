#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        float x,y;
        cin>>x>>y;

        cout<<ceil(abs((x-y)/2))<<endl;
    }
return 0;
}