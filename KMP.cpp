#include<bits/stdc++.h>

using namespace std;


int *getLPS(string pattern)
{
	int len=pattern.length();
	
	int i=1;
	int j=0;
	int *lps=new int[len];
	lps[0]=0;
	while(i<len)
	{
		if(pattern[i]==pattern[j])
		{
			lps[i]=j+1;
			i++;
			j++;
		}
		else
		{
			if(j!=0)
			{
				j=lps[j-1];
			}
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
	
	return lps;
}
bool kmpSearch(string a,string b)
{
	int *lps=getLPS(b);
	int l1=a.length();
	int l2=b.length();
	int i=0,j=0;
	
	while(i<l1&&j<l2)
	{
		if(a[i]==b[j])
		{
		i++;
		j++;
		}
		else
		{
			if(j!=0)
			{
			j=lps[j-1];
			}
			else
			{
			i++;
			}
		}
	}
	
	return j==l2?true:false;
	
}
int main()
{
	string a,b;
	cin>>a;
	cin>>b;
	cout<<kmpSearch(a,b)<<endl;
return 0;
}
