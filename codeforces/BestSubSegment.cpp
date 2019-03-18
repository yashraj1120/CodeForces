#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
int m=0;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	m=max(arr[i],m);
}
int count=0;
int mcount=0;
for(int i=0;i<n;i++)
{
	while(i<n && arr[i]==m)
	{
		count++;
		i++;
	}
	mcount=max(count,mcount);
	count=0;
	
}
cout<<mcount;


}

