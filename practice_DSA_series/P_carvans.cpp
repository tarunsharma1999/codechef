#include<iostream>
#include<string>
#include <bits/stdc++.h> 
#include<algorithm>
using namespace std; 
int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		int n,mx=0,count=1;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		mx=arr[0];
		for(int i=1;i<n;i++)
		{
			if(mx >arr[i])
			{
				mx = arr[i];
				count++;
			}
		}
		cout<<count<<endl;
	}
	
	
}
