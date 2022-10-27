#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll arr[5][5]={0};
    for (ll i = 0; i < 5; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (ll i = 0; i < 5; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            if (arr[i][j]==1)
            {
                cout<<(abs(i-2)+abs(j-2));
            }
            
        }
        
    }
    
    
return 0;
}