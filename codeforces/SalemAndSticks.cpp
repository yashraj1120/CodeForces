#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];	
	}	
	sort(arr,arr+n);
	int midval=n%2==1?arr[(n-1)/2]:(arr[(n-1)/2]+arr[(n-1)/2+1])/2;
	int min=INT_MAX;
	int m=midval;
	if(midval==1)
	{
		midval=2;
	}
	for(int k=midval-1;k<=midval+1;k++)
	{
		int ans=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<k)
		{
			ans+=(k-1)-arr[i];
		}
		if(arr[i]>k)
		{
			ans+=arr[i]-(k+1);
		}
	}
	if(min>ans)
	{
		min=ans;
		m=k;
	}
}
	cout<<m<<" "<<min;
}
