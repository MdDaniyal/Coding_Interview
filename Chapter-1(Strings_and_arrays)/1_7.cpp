#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 5;
	int j = 0;
	// cin>>n;
	int top_left,top_right,bot_left, bot_right;
	int a[n][n] = {{8,5,4,9,6},
					{4,5,3,7,2},
					{6,2,8,1,4},
					{3,9,7,5,6},
					{5,8,6,4,3}};
	
	int m = n;
	for(int i = 0;i < n;i++)
	{
		for(int j = 0; j< n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
	for(int i = 0;i < n/2;i++)
	{
		int tl = i;
		int tr = i;
		int bl = n-1;
		int br = n-1;
		while(j < n-(i+1))
		{
			top_left = a[i][tl];
			top_right = a[tr][n-1];
			bot_left = a[bl][i];
			bot_right = a[n-1][br];
			a[i][tl] = bot_left;
			a[tr][n-1] = top_left;
			a[n-1][br] = top_right;
			a[bl][i] = bot_right;
			tl++;
			tr++;
			br--;
			bl--;
			j++;
		}
		n--;
		j = 0;
	}
	cout<<"rotated : -"<<'\n';
	for(int i = 0;i < m;i++)
	{
		for(int j = 0; j< m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
}