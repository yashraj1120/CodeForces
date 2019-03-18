#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,m,k;
cin>>n>>m>>k;
int power[n+1]={0};
int sc[n+1]={0};
int maxp[m+1]={0};
for(int i=1;i<=n;i++)
{
	cin>>power[i];
}
for(int i=1;i<n+1;i++)
{
	cin>>sc[i];
	if(maxp[sc[i]]<power[i])
	{
		maxp[sc[i]]=power[i];
	}
	
}
int count=0;
for(int i=0;i<k;i++)
{
	int temp;
	cin>>temp;
	if(maxp[sc[temp]]!=power[temp])
	{
			count++;
	}
}
cout<<count;
return 0;
}

