#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	//s = I am Daniyal
	int n = s.length();
	int count_words = 0;
	for(int i = 0;i<n;i++)
	{
		if(s[i] == ' ')
		{
			if(s[i+1] != ' ')
			{
				count_words++;
			}
			else
			{
				break;
			}
		}
	}
	int k = n - count_words*3 - 1;
	for(int i = n - 1;i >= 0;i--)
	{
		if(s[k] != ' ')
		{
			s[i] = s[k];
		}
		else
		{
			s[i] = '0';
			s[i-1] = '2';
			s[i-2] = '%';
			i -= 2;
		}
		k--;
	}
	cout<<s<<endl;
}