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
		int G;
		cin>>G;
		while(G--)
		{
			int i,n,q;
			cin>>i>>n>>q;
			if(n%2==0)
			{
				cout<<n/2<<endl;	
			}else
			{
				if(i==q)
				{
					cout<<(n-1)/2<<endl;
				}else
				{
					cout<<(n+1)/2<<endl;
				}
			}
		}	
	}
}
