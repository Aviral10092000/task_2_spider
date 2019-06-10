#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	int n;
	cin>>n;
	while(n--)
	{
		string a;
		cin>>a;
		int m = 0;
		int count1 = 0;
		int count2 = 0;
		int max = 0;
		for(int i=0;i<a.length();i++)
		{
			if(a.length()%2==1)
			{
				m = 1;
				break;
			}
			if(a[i]=='<')
			{
				count1++;
			}
			else
			{
				count2++;
				if(count2>count1)
				{
					m = 1;
					break;
				}
			}
			if(count1==count2)
			{
				if(count1>max)
				max = count1;
				count1 = count2 = 0;
			}
		}
		if(m==0)
		{
			if(count1==count2)
			{
				cout<<2*max<<'\n';
			}
			else
			{
				cout<<"0\n";
			}
		}
		else
		{
			cout<<"0\n";
		}
	}
}
