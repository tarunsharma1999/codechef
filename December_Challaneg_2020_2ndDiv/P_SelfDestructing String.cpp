//Self Destructing Strings
//https://www.codechef.com/problems/SDSTRING
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n1=0,n2=0;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			{
				n1++;
			}
		}
		n2 = s.length() - n1;
		int x;
		x = abs(n2-n1);
		//cout<<x<<endl;
		if(s.length()%2!=0 || n1==0 || n2==0)
		{
			cout<<-1<<endl;
		}else{
			cout<<x/2<<endl;
		}
		
	}
	return 0;
}
