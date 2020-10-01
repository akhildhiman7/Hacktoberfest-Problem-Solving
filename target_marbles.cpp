#include<bits/stdc++.h>
using namespace std;
int main()
{
int a = 7;
int b = 17;
int *c = &b; 
a = *c;
*c = *c + 1;
cout  << a << "  " << b << endl;
	int n,m,i,j;
	cin>>n>>m;
	int num[n],sum=0;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+num[j];
			if(sum==m)
			{
				break;
			}
			if(sum>m)
			{
				break;
			}
		}
		if(sum==m)
		{
			break;
		}
	}
	if(sum!=m)
	{
		cout<<"false";
	}
	else
	{
		cout<<"true"<<endl;
	   for(i;i<=j;i++)
    	{
		cout<<num[i]<<" ";
	    }	
	}
}
