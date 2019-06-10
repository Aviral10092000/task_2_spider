#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	long long unsigned int n;
	cin>>n;
	double a[n];
	for(long long unsigned int i = 0;i<n;i++)
	{
		a[i] = i+1;
	}
	long long unsigned int q;
	cin>>q;
	double max = n;
	while(q--)
	{
		double x,y,num;
		cin>>x>>y>>num;
		for(long long unsigned int i=x;i<=y;i++)
		{
			a[i-1] = a[i-1] + num; 
			if(a[i-1]>max)
			max = a[i-1];
		}
	}
	cout<<max;
	
}
