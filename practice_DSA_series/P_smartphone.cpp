#include<iostream>
#include<string>
#include <bits/stdc++.h> 
#include<algorithm>
using namespace std; 
int main()
{
	long long int n,max,cur;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr + n);
	max = arr[0] * n;
	
	for(int i=1;i<n;i++)
    {
        cur=arr[i];
        
        if(max<cur*(n-i))
        {
            max=cur*(n-i);
        }
    }
	
	cout<<max;
	
}
