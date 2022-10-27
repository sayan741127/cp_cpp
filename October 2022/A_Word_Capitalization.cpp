#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;

    if (s[0]>'Z')
    {
        char x=s[0]-'a'+'A';
        s[0]=x;
    }
    
    cout<<s<<endl;
return 0;
}