//EVEN PAIR SUM
//EVENPSUM
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int n1,n2;
		cin>>n1>>n2;
		if(n1%2!=0 and n2%2!=0)
		{
			cout<<((n1*n2)/2)+1<<endl;
		}else{
			
			cout<<((n1*n2)/2)<<endl;
		}
	}
}
