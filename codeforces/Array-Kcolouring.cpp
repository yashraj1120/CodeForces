#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
		int arr[n];
		int color[k+1]={0};
		map <int,int> count;
		int res[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			count[arr[i]]=count[arr[i]]+1;
		}
				
		int flag=0;
		int r=k;
		for(int i=0;i<n;i++)
		{
			if(count[arr[i]]>r)
			{
				cout<<"NO"<<endl;
				flag=1;
				break;	
			}
			else if(count[arr[i]]>0 && k>0 && k>=count[arr[i]]  &&color[k]!=1 )
			{
				res[i]=k;
				color[k]=1;
				k--;
				count[arr[i]]--;
			}
			else{
			res[i]=count[arr[i]];
			count[arr[i]]=count[arr[i]]-1;
		}}
		if(flag==0)
		{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<res[i]<<" ";
			}
		}
		
	}	

