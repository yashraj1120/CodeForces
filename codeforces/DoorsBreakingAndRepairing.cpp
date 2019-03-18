#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	if(x>y)
	{
		cout<<n;
	}
	else
	{
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<=x)
			{
				count++;
			}
		}
		cout<<max(0,(int)ceil((double)count/2));
	}
}
