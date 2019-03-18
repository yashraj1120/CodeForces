#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
long long  arr[n];
long long s=0;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	s+=arr[i];
}
long m;
sort(arr,arr+n);
cin>>m;
while(m!=0)
{
	int temp;
	cin>>temp;
	cout<<s-arr[n-temp]<<"\n";
	m--;
}

}

