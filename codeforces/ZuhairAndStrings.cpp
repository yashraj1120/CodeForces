#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	string s;
	cin>>s;
	map<char,int> count;
	int max=0;
	int c=1;
	char temp=s[0];
	for(int i=1;i<n;i++)
	{
		
		if(s[i]==temp)
		{
			c++;
		}
		else
		{
			count[temp]+=c/k;
		if(max<count[temp])
		{
			max=count[temp];
		}
			temp=s[i];
			c=1;
		}
		
	}
	count[temp]+=c/k;
	if(max<count[temp])
		{
			max=count[temp];
		}
	
	cout<<max;
}
