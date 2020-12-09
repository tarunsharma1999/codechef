#include<iostream>
#include<string>
#include <bits/stdc++.h> 
#include<algorithm>
using namespace std; 

int main()
{
	int  T,score;
	cin>>T;
	while(T--)
	{
		int act;
		string ori;
		cin>>act;
		cin>>ori;
		while(act--)
		{
			string type;
			cin>>type;
			if(type=="CONTEST_WON")
			{
				int rank;
				cin>>rank;
				score+=300;
				if(rank<=20)
				{
					score+=20-rank;
				}
			}
			if(type=="TOP_CONTRIBUTOR")
			{
				score+=300;
			}
			if(type=="BUG_FOUND")
			{
				int sev;
				cin>>sev;
				score+=sev;
			}
			if(type=="CONTEST_HOSTED")
			{
				score+=50;
			}
		}
		
		if(ori=="INDIAN")
		{
			if(score<200)
			{
				cout<<0<<endl;
			}
			else
			{
			cout<< int(score/200)<<endl;
			}
		}
		else
		{
			if(score<400)
			{
				cout<<0<<endl;
			}
			else
			{
				cout<<floor(score/400)<<endl;
			
			}
		}
		score=0;
	}
}
