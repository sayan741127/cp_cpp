#include<bits/stdc++.h> 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;


#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define er(a) ll a; cin>>a;
#define ee(a,b) ll a,b; cin>>a>>b;
#define eee(a,b,c) ll a,b,c; cin>>a>>b>>c;
#define vll(v,no_words) vector<ll> v(no_words); fl(i,0,no_words) cin>>v[i];
#define aa(arr,no_words) ll arr[no_words]; fl(i,0,no_words) cin>>arr[i];
#define ss(s) string(s); cin >> (s);
#define vvll vector<vector<ll>>
#define sz(s) s.size()
#define mod 1000000007
#define fr first
#define sd second
#define inf 10e15
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define mii map<int,int>
#define fs(x,y)  fixed<<setprecision(y)<<x
#define nl cout<<endl;
#define R return
#define B break
#define C continue
#define YS cout<<"YES"<<"\no_words"
#define NS cout<<"NO"<<"\no_words"
#define Ys cout<<"Yes"<<"\no_words"
#define Ns cout<<"No"<<"\no_words"
const int N = 1e5 + 5;


void solve() {
    ll no_words;
    cin>>no_words;

    vector<vector<string>> v(3,vector<string>(no_words)); //  vector of vector string
    unordered_map<string,ll> amar_map; // map is to sote their count

    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < no_words; j++)
        {
            cin>>v[i][j];
            amar_map[v[i][j]]++; 
        }
        
    }

    vector<ll> w(3);

    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < no_words; j++)
        {
            if (amar_map[v[i][j]]==1) // jokhon keo soman na
            {
                w[i]+=3;
            }
            else if (amar_map[v[i][j]]==2) // jokhon 1 jon er sathe soman
            {
                w[i]++;
            }
            
            
        }
        
    }

    cout<<w[0]<<" "<<w[1]<<" "<<w[2]<<endl;
    
    
    //     string s,p,r;

    // vector<string> v,u,w;
    // for (ll i = 0; i < no_words; i++)
    // {
    //     cin>>s;
    //     v.pb(s);

    // }
    // for (ll i = 0; i < no_words; i++)
    // {
    //     cin>>p;
    //     u.pb(p);

    // }
    // for (ll i = 0; i < no_words; i++)
    // {
    //     cin>>r;
    //     w.pb(r);

    // }

    // pair<int,int> pt_v={0,0},pt_u={0,0},pt_w={0,0};
    // for (ll i = 0; i < no_words; i++)
    // {
    //     for (ll j = 0; j < no_words; j++)
    //     {
    //         for (ll k = 0; k < no_words; k++)
    //         {
    //             if (v[i]==u[j]&&v[i]==w[k])
    //             {
    //                 pt_v.first+=0;
    //             }
    //             else if (v[i]==u[j]||v[i]==w[k])
    //             {
    //                 pt_v.first+=1;
    //             }
                
                
                
    //         }
            
    //     }
        
    // }
    

    // for(auto i:v)cout<<i;
    // nl;
    // for(auto i:u)cout<<i;
    // nl;

    // for(auto i:w)cout<<i;
    // nl;
    


}


int main(){
    fast;

    int t; cin>>t; while(t--) {
    solve();
    }

return 0;
}