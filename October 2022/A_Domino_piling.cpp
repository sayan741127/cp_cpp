#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    
        ll m,n;
        cin>>m>>n;
        if (m>n)
        {
            swap(m,n);
        }
        

        cout<<n*(m/2)+((m%2)*(n/2))<<endl;
    
return 0;
}