
#include<bits/stdc++.h> 
using namespace std;
int n,h,i,cnt;
int main()
{
	cin>>n;
	while (cnt <= n)
	{
		h++;
		cnt += (h*(h+1))/2;
	}
	cout<<h-1<<endl;
	return 0;
}



// #include<bits/stdc++.h> 
// using namespace std;
// #define ll long long
// int main(){
//     ll n,flag=1,count=0;
//     cin>>n;

//     // for (ll i = 0; count < n && count !=n ; i++)
//     // {
//     //     count+=(i*(i+1)/2);
//     //     flag++;
//     // }
//     while (count<n)
//     {   
//         flag++;
//         count+=flag*(flag-1)/2;
//     }
    
//     cout<<flag-1<<endl;
    
    
    
// return 0;
// }