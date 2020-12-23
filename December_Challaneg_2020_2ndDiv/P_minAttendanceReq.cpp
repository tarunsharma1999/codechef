//Minimum attendance req.
//https://www.codechef.com/problems/ATTENDU
#include <stdio.h>
#include<iostream>
#include<string.h>
#define Total 120
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		float d=0;
		string arr;
		cin>>arr;
		for(int i=0;i!=arr.length();i++)
		{
			if(arr[i]=='1')
			{
				d++;
			}
		}
		d =d + (Total - N);
		d =(d/Total)*100;
		if(d<75.00)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
}
