#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int count=0;
	for(int i=1;i<n;i+=2)
	{
		count+=arr[i]-arr[i-1];
	}
	cout<<count;
}
