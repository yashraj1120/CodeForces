#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	int d1=a[2][0]-a[0][1];
	int d2=a[1][2]-a[2][0];
	
	int start=(max(a[0][2]+a[2][0],max(a[0][1]+a[0][2],a[0][2]+a[1][2]))+1)/3;
	
	for(int i=1;i<=100000;i++)
	{
		int sum=i;
		sum+=(a[0][2]+a[2][0]);
		int s1=(sum-a[0][1]-a[0][2]);
		int s2=(sum-a[0][2]-a[1][2]);
		if(s1+s2+i==sum)
		{
			a[2][2]=s2;
		a[1][1]=i;
		a[0][0]=s1;
			break;
		}
	}
		for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
	//cout<<d2<<d1<<start<<endl;
/*	int i=start;
	while(true)
	{
	
		a[2][2]=i;
		a[1][1]=i+d2;
		a[0][0]=a[1][1]+d1;
		int s1=0,s2=0,s3=0;
		s2=a[1][1]+a[0][0]+i;
		for(int j=0;j<3;j++)
		{
			s1+=a[0][j];
			s3+=a[j][2];
		}
		if(s1==s2 && s2==s3)
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
		}
	}*/
	
}
