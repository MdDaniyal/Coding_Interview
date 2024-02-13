#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	map<char, int> m;
	for(int i = 0;i<s.length();i++)
	{
		m[s[i]]++;
	}
	for(auto i = m.begin(); i != m.end();i++)
	{
		if(i->second > 1)
		{
			cout<<i->first;
		}
	}
}