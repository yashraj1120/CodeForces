#include<bits/stdc++.h>

using namespace std;

int main()
{
	int temp;
	int n,k;
	cin>>n>>k;
	int j[n];
	set<pair<int,pair<int,int>>> b;
	map<int,int> job;
	
	for(int i=0;i<n;i++)
	{
		cin>>j[i];
		if(job.find(j[i])==job.end())
		{
			job[j[i]]=1;
		}
		else
		{
			job[j[i]]++;
		}
	}
	int count=job.size();
	for(int i=0;i<n;i++)
	{
		
		cin>>temp;
		b.insert({temp,{j[i],i}});
	}
	long long ans=0;
	
	set<pair<int,pair<int,int>>>::iterator i=b.begin();
	/*for(pair<int,pair<int,int>> k:b)
	{
		cout<<k.first<<" "<<k.second.first<<endl;
	}*/
	while(count!=k)
	{
		pair<int,pair<int,int>> t=*i;
		if(job[t.second.first]>1)
		{
			ans+=t.first;
			count++;
			job[t.second.first]--;
		}
		i++;
	}
	cout<<ans;
}
