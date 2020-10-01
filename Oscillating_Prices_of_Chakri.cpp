#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int num[n];
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	int j,max=0,sum=0;
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=i-1;j>=0;j--)
		{
			sum=num[i]-num[j];
			if(sum>max)
			{
				max=sum;
			}
		}
	}
	cout<<max;
	
}
