#include<iostream>
#include<string>
#include <bits/stdc++.h> 
using namespace std; 
int main()
{
	int n;
	string s;
	char x;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int len = s.length(),lo,mid,f=0;
		string s1,s2,s3;
		
		if(len%2==0)
		{
			lo = len/2 -1;
			mid = len/2 ;
		}else{
			lo = len/2 -1;
			mid = len/2 +1;
		}
		
		for(int i=0;i<len;i++)
		{
			if(i<=lo)
			{
				s1+=s[i];
			}else if(i>=mid)
			{
				s2+=s[i];
			}
		}
		//cout<<s1<<" "<<s2<<endl;
		for(int i=0;i<s1.length();i++)
		{
			if ( count(s1.begin(),s1.end(),s[i]) != count(s2.begin(),s2.end(),s[i]) )
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
