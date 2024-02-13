#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);

	map<char, int> m1;
	map<char, int> m2;
	for(int i = 0;i<s1.length();i++)
	{
		m1[s1[i]]++;
	}
	for(int i = 0;i<s2.length();i++)
	{
		m2[s2[i]]++;
	}
	if(m1 == m2)
		cout<<"True";
	else
		cout<<"False";
}