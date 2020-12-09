#include <iostream>
using namespace std;

int main()
{
    int t , n;
    cin>>t;
    while(t--)
{
        cin>>n;
        int rn=0, r;
    while(n!=0){
        r = n%10;
        rn = rn*10 + r;
        n = n/10;
}
        cout<<rn<<endl;
}

	// your code goes here
	return 0;
}

