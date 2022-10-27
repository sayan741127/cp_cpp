#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll n,k;
    cin>>n>>k;

    int arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     ll flag=0;
    // sort(arr,arr+n);
    sort(arr, arr + n, greater<int>());


    for (ll i = 0; i < n; i++)
    {
  
        if(arr[i]>=arr[k-1]&&arr[i]>0)
            flag++;
    }
    cout<<flag<<endl;
    
    
return 0;
}