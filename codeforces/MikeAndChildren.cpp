#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
int prev=-100;
int count=1;
int maxc=1;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
map<int,int> sum;
//sort(arr,arr+n);
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(sum.find(arr[i]+arr[j])==sum.end())
		{
		sum[arr[i]+arr[j]]=1;
		}
		else
		{
			sum[arr[i]+arr[j]]++;
		}
		maxc=max(maxc,sum[arr[i]+arr[j]]);
	}
}


/*for(int i=0;i<mid;i++)
{
	cout<<arr[i]+arr[n-i-1]<<"    prev="<<prev<<endl;
	if(i!=n-i-1)
	{
		if(arr[i]+arr[n-i-1]==prev)
		{
			count++;
		}
		else
		{
			maxc=max(maxc,count);
			count=1;
			prev=arr[i]+arr[n-i-1];
		}
	}
}*/
//maxc=max(maxc,count);
cout<<maxc;


}

