#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	//s = I am Daniyal

	//aabbcd
	int n;
	int count_one = 0;
	map<char,int>m;
	for(int i = 0;i < s.length();i++)
	{
		if(s[i] != ' ')
			n++;
	}
	cout<<n<<'\n';
	for(int i = 0;i < s.length();i++)
	{
		if(s[i] != ' ')
			m[s[i]]++;
	}
	// if(n%2 == 0)
	// {
	// 	for(auto i = m.begin(); i != m.end(); i++)
	// 	{
	// 		if(i->second != 2)
	// 		{
	// 			cout<<"False"<<endl;
	// 			return 0;
	// 		}
	// 	}
	// 	cout<<"True"<<endl;
	// }
	// else
	// {
		for(auto i = m.begin(); i != m.end(); i++)
		{
			if(i->second != 2)
			{
				if(i->second == 1)
				{
					count_one++;
				}
				else
				{
					cout<<"False"<<endl;
					return 0;
				}
			}
		}
		if(count_one <= 1)
			cout<<"True"<<endl;
		else
			cout<<"False"<<endl;
	// }
}