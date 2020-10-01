#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	int sum1=0,sum2=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0&&num[i]%2==0)
		{
			sum1=sum1+num[i];
		}
		else if(i%2!=0&&num[i]%2!=0)
		{
			sum2=sum2+num[i];
		}
	}
	cout<<sum1<<" "<<sum2<<endl;
}
