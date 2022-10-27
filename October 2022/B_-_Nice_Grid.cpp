#include<bits/stdc++.h> 
using namespace std;
#define ll long long

string colour(ll r,ll c){
     ll n=15; 
    // for (ll r = 1; r <=n; r++)
    // {
    //     for (ll c = 1; c <= n; c++)
    //     {
           
            
            if (r==1||r==15)
            {
                return "black";
                
            }
            if (r==2||r==14)
            {
                if (c==1||c==15)
                {
                    return "black";
                    
                }
                else
                {
                    return "white";
                    
                }  
            }
            if (r==3||r==13)
            {
                if (c==2||c==14)
                {
                    return "white";
                }
                else
                {
                    return "black";
                    
                }  
            }
            if (r==4||r==12)
            {
                if (c==1||c==3||c==15||c==13)
                {
                    return "black";
                }
                else
                {
                    return "white";
                }
                
                
            }
            if (r==5||r==11)
            {
                if (c==2||c==4||c==14||c==12)
                {
                    return "white";
                }
                else
                {
                    return "black";
                }
                
                
            }
            if (r==6||r==10)
            {
                if (c==1||c==3||c==5||c==15||c==13||c==11)
                {
                    return "black";
                }
                else
                {
                    return "white";
                }
                
                
            }
            if (r==7||r==9)
            {
                if (c==2||c==4||c==6||c==14||c==12||c==10)
                {
                    return "white";
                }
                else
                {
                    return "black";
                }
                
                
            }
            if (r==8)
            {
                if (c%2==1)
                {
                    return "black";
                }
                else
                {
                    return "white";
                }
                
                
            }
            
            

            
        // }
        // return end  
    // }
    return "s";
}


int main(){
   
    
    ll ro,co;
    cin>>ro>>co;

    cout<<colour(ro,co)<<endl;

return 0;
}