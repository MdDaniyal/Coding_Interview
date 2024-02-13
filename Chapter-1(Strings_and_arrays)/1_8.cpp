#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m = 3;
	int n = 5;
	int j = 0;
	// cin>>n;
	int top_left,top_right,bot_left, bot_right;
	int a[m][n] = {{8,5,4,9,6},
					{4,0,3,7,2},
					{6,2,8,0,4}};
	
	// int m = n;
	vector<int>row;
	vector<int>column;
	for(int i = 0;i < m;i++)
	{
		for(int j = 0; j< n;j++)
		{
			if(a[i][j] == 0)
			{
				row.push_back(i);
				column.push_back(j);
			}
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
	for(int i = 0;i < row.size();i++)
	{
		for(int j = 0; j < n;j++)
		{
			a[row[i]][j] = 0;
		}
	}
	for(int i = 0;i < column.size();i++)
	{
		for(int j = 0; j < m;j++)
		{
			a[j][column[i]] = 0;
		}
	}
	cout<<"changed : -"<<'\n';
	for(int i = 0;i < m;i++)
	{
		for(int j = 0; j< n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
}