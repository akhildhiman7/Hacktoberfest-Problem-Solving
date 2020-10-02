#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    int z;
    cin>>z;
    while(z--)
    {
        unordered_map<char,int>map;
        int n,i,flag=0;
        cin>>n;
        string a,s;
        for(i=0;i<n;i++)
        {
            cin>>s;
            a+=s;
        }
        int l=a.size();
        for(i=0;i<l;i++)
        {
            map[a[i]]++;  
        }
        for(auto x:map)
        {
            if(x.second%n!=0)
            flag=1;
        }
        if(flag==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;  
    }
}
