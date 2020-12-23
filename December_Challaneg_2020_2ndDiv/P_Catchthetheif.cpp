//Catch the theif
//https://www.codechef.com/problems/CATHIEF
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int x,y,k,N;
		cin>>x>>y>>k>>N;
		if( abs(y-x) % (2*k) ==0)
		{
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	}
}
