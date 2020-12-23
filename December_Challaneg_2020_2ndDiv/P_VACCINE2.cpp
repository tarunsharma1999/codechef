#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	long long int T;
	cin>>T;
	while(T--)
	{
		long long int n,d,risky=0,normal=0,days=0;
		cin>>n>>d;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>=80 || arr[i]<=9)
			{
				risky++;
			}
		}
		
		normal = n - risky;
		
		risky%d==0 ? (days+=int(risky/d) ): (days+= int(risky/d) + 1);
		normal %d ==0 ? (days+= int(normal/d)) : (days+= int(normal/d) +1);
		
		cout<<days<<endl;
	
	}

}
