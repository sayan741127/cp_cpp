#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
         ll n,x;
      cin>>n>>x;
    
      if(n>x){
          cout<<-1<<endl;
          continue;
      }
      
      cout<<x-n+1<<" ";

      for(ll i=1;i<=n;i++){

          if(i!=x-n+1){
              cout<<i<<" ";
          }
          
      }
      cout<<endl;
    }
return 0;
}