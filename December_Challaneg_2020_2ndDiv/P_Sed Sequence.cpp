// Sed Sequence 
// https://www.codechef.com/problems/SEDARR
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k,sum=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			int fl;
			cin>>fl;
			sum+=fl;
		}
		if(sum%k==0)
		{
			cout<<0<<endl;
		}else{
			cout<<1<<endl;
		}
		
	}
	return 0;
}
