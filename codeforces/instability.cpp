#include <bits/stdc++.h> 
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
if(n==1 || n==2)
{
	cout<<0;
}
else
{
sort(arr,arr+n);
if(arr[n-1]-arr[1]>=arr[n-2]-arr[0])
{
	cout<<arr[n-2]-arr[0];
}
else
{
	cout<<arr[n-1]-arr[1];
}
}
}
