//Vaccine Production
//VACCINE1
#include <iostream>
using namespace std;

int main()
{
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int i=1;
	int made=0;
	while(true)
	{
		if(i>=d1)
		{
			made+=v1;
		}
		if(i>=d2)
		{
			made+=v2;
		}
		
		if(made==p or made>p)
		{
			break;
		}
		i+=1;
	}
	cout<<i;
		
	
}
