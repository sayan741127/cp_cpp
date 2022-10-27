#include<bits/stdc++.h> 
using namespace std;

#define ll long long


int main(){

    ll n;
    cin>>n;
    ll arr[n];
    ll max=-1,min=201;
    

    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];

        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }


    ll flag=0,count=0;
    // cout<<max<<" "<<min;
    
    for (ll i = 0; i < n; i++)
    {
        if (max==arr[i]){
        
            break;
        }
        
        flag++;
        
    }
    for (ll i = n-1; i >=0 ; i--)
    {
        if (min==arr[i])
        {
            break;
        }
        count++;
        
    }

    // cout<<flag<<" "<<count<<endl;

    if (n<(flag+1+count))
    {
        cout<<(flag+count-1)<<endl;
    }
    else
    {
        cout<<(flag+count)<<endl;
    }
    
    
    
    
    
return 0;
}