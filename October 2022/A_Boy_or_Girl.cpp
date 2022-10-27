
#include <bits/stdc++.h>
using namespace std;

// Program to count the number of
// unique characters in a string

int cntDistinct(string str)
{
	set<char> s;

	
	for (int i = 0; i < str.size(); i++) {

		s.insert(str[i]);
	}

	
	return s.size();
}


int main()
{
	    string s;
    cin>>s;

	
     if (cntDistinct(s)%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

	return 0;
}
