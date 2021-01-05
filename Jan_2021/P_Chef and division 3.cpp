//https://www.codechef.com/JAN21C/problems/DIVTHREE
// chef and division 3 
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int n,k,d;
		cin>>n>>k>>d;
		long long int arr[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum +=arr[i];
		}
		if (sum/k > d)
		{
			cout<<d<<endl;
		}else{
		cout<<sum/k<<endl;
		}
	}
	return 0;
}
