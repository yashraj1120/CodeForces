#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int flag=0;
int *arr;
int r;
void recurse(int p,int count,int n)
{
	
	if(p>=r || n<1 || flag==1)
	{
		return;
	}
	int tc1=count+arr[p];
	int tc2=count-arr[p]<360?360+(count-arr[p]):count-arr[p];
	//cout<<tc1%360<<"tc1   tc2="<<tc2%360<<" n"<<n<<endl;
	if(((tc1)%360==0||(tc2)%360==0)&& n==1)
	{
		flag=1;
		cout<<"YES";
		return;
	}
	recurse(p+1,(tc1)%360,n-1);
	recurse(p+1,(tc2)%360,n-1);	
}
int main()
{
	cin>>r;
	arr=(int*)malloc(r*sizeof(int));
	for(int i=0;i<r;i++)
	{
		cin>>arr[i];
	}
	recurse(0,0,r);
	if(flag==0)
	{
		cout<<"NO";
	}
	
}
