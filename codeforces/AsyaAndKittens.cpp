#include<bits/stdc++.h>

using namespace std;



int main()
{
	int n;
	cin>>n;
	int arr[200000];
	int a,b;
	vector<int> res[200000];
	//map<int,vector<int>> res;
	for(int i=1;i<=n;i++)
	{
		arr[i]=i;
		res[i].push_back(i);
	}
	for(int i=0;i<n-1;i++)
	{
		cin>>a>>b;
		int fa=arr[a];
		int fb=arr[b];
		if(res[fa].size()<res[fb].size())
		{
			swap(fa,fb);
		}
		for(int j=0;j<res[fb].size();j++)
		{
			res[fa].push_back(res[fb][j]);
			arr[res[fb][j]]=fa;
		}
	}
		for(int i=0;i<n;i++)
		{
			cout<<res[arr[1]][i]<<" ";
		}
		return 0;
	}



/*	if(fa<fb)
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
			}*/	
		//printArr(arr,n+1);
	
		
/*	map<int,vector<int>>::iterator i=res.begin();
	for(;i!=res.end();i++)
	{
		//cout<<"key="<<i->first<<" ";
		for(int k : i->second)
		{
			cout<<k<<" ";
		}
	}*/


/*

void printArr(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}*/
