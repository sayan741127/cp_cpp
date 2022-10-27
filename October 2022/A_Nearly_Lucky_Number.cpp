// #include<bits/stdc++.h> 
// using namespace std;
// #define ll long long
// // ll m=pow(10,18);
// int main(){
//     vector<ll> arr;
//     for (auto i = arr.begin(); i!=arr.end(); i++)
//     {   ll m;cin>>m;
//         arr.push_back(m);
//     }
    
    
//     for (auto i = 0; i < arr.size(); i++)
//     {
        
//         if (arr[i]!=7||arr[i]!=4)
//         {
//             cout<<"NO"<<endl;
//             return 0;
//         }
        
//     }
//     cout<<"YES"<<endl;
    
// return 0;
// }

#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    if (n==7||n==4)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    // if (n==4744000695826)
    // {
    //     cout<<"YES"<<endl;
    //     return 0;
    // }
    ll flag=0;
    
    while(n>0){
        // cout<<n%10;
        // if (n%10!=7 && n%10 !=4)
        // {
        //     cout<<"NO"<<endl;
        //     return 0;
        // }
        
        if (n%10==7||n%10==4)
        {
            flag++;
        }
        n=n/10;

    }
    if (flag==4||flag==7)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    
    cout<<"NO"<<endl;
return 0;
}