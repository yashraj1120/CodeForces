#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n ;j++)
		{
			if(i*j>n && j%i==0 )
			{
				cout<<j<<" "<<i;
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	if (flag==0)
	{
		cout<<-1;
	}
}
