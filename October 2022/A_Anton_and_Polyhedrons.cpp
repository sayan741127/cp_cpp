// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// // ll ans=0;
// int main(){
//   map<string, int> values;
// 	values["Tetrahedron"]  = 4;
// 	values["Cube"]         = 6;
// 	values["Octahedron"]   = 8;
// 	values["Dodecahedron"] = 12;
// 	values["Icosahedron"]  = 20;
// 	int no_of_polyhedras; cin >> no_of_polyhedras;
// 	int answer = 0;
// 	for (int i = 0; i < no_of_polyhedras; i++) {
// 		string s; cin >> s;
// 		answer += values[s];
// 	}
// 	cout << answer << endl;
// 	return 0;
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// ll ans=0;
int main()
{
	
		ll n; cin>>n;
		ll ans=0;
		map<string, int> values;
		values["Tetrahedron"] = 4;
		values["Cube"] = 6;
		values["Octahedron"] = 8;
		values["Dodecahedron"] = 12;
		values["Icosahedron"] = 20;

		for (ll i = 0; i < n; i++)
		{
			string s; cin>>s;
			ans+=values[s];
		}
		
		
	cout<<ans<<endl;

	return 0;
}