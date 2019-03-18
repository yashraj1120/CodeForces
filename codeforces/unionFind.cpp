#include<bits/stdc++.h>

using namespace std;



int find(int arr[],int p)
{
	/*if(arr[p]==-1)
	{
		return p;
	}
	find(arr,arr[p]);*/
	while(arr[p]!=-1)
	{
		p=arr[p];
	}
	return p;
}

int main()
{
int n;
cin>>n;
int arr[n+1];
fill_n(arr,n+1,-1);
int a,b;
map<int,vector<int>> res;
for(int i=1;i<=n;i++)
{
	res.insert(pair<int,vector<int>>(i,{i}));
}
for(int i=0;i<n-1;i++)
{
	cin>>a>>b;
	int fa=find(arr,a);
	int fb=find(arr,b);
	
		if(fa<fb)
		{
			arr[fa]=fb;
			res[fb].insert(res[fb].end(),res[fa].begin(),res[fa].end());
			res.erase(fa);
		}
		else if(fb<fa)
		{
			arr[fb]=fa;
			res[fa].insert(res[fa].end(),res[fb].begin(),res[fb].end());
			res.erase(fb);
		}	
}
	
map<int,vector<int>>::iterator i=res.begin();
for(;i!=res.end();i++)
{
	//cout<<"key="<<i->first<<" ";
	for(int k : i->second)
	{
		cout<<k<<" ";
	}
}



}

