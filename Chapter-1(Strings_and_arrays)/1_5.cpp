#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);
	if(s1 == s2)
	{
		cout<<"True";
		return 0;
	}
	int count_different = 0;
	int a1[26] = {0};
	int a2[26] = {0};
	for(int i = 0;i<s1.length();i++)
	{
		a1[s1[i] - 'a']++;
	}
	for(int i = 0;i<s2.length();i++)
	{
		a2[s2[i] - 'a']++;

	}
	if(s1.length() == s2.length())
	{
		for(int i = 0;i < 26;i++)
		{
			if(a1[i] != a2[i])
				count_different++;
			if(count_different > 2)
			{
				cout<<"false"<<'\n';
				return 0;
			}
		}
		cout<<"true"<<'\n';
	}
	else
	{
		for(int i = 0;i < 26;i++)
		{
			if(a1[i] != a2[i])
				count_different++;
			if(count_different > 1)
			{
				cout<<"false"<<'\n';
				return 0;
			}
		}
		cout<<"true"<<'\n';
	}
}