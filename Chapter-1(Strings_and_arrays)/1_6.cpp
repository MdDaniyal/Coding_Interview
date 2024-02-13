#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string s2="";
	getline(cin, s);
	int count = 1;
	for(int i = 0;i < s.length() - 1; i++)
	{
		if(s[i] == s[i+1])
			count++;
		else
		{
			s2 += s[i];
			s2 += char(count + '0');
			count = 1;
		}
	}
	if(s[s.length() - 1 ] == s[s.length() - 2])
	{
		s2 += s[s.length() - 1];
		s2 += char(count + '0');
	}
	else
	{
		s2 += s[s.length() - 1];
		s2 += '1';
	}
	if(s.length() > s2.length())
		cout<<s2<<endl;
	else
		cout<<s<<endl;
}