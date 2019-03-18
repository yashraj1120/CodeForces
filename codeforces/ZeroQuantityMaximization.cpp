#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
map<long double,int> div;
double a[n],b[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int m=0;
int count=0;
for(int i=0;i<n;i++)
{
	cin>>b[i];
	if(a[i]==0&&b[i]==0)
	{
		count++;
		continue;
	}
	//cout<<(double)(-b[i]/a[i]);
	if(a[i]!=0)
	{
		div[(double)(-b[i]/a[i])]++;
		m=max(div[(double)(-b[i]/a[i])],m);
	}
}
cout<<m+count;



}

