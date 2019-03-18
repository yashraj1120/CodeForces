#include<bits/stdc++.h>

using namespace std;


int recurse(int s,vector<int> a,vector<int> b)
{
	if(a.size()==0)
	{
		
	}
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<b.size();j++)
		{
		if(a[i]+b[j]==s)
		{
			vector<int> t1(a);
			vector<int> t2(b);
			t1.erase(i);
			t2.erase(i)
			recurse(s,t1,t2);
			}	
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n][2];
	vector<int> a1;
	vector<int> b1;		
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
		a1.add(a[i][0]);
	}
	int b[n][2];
		for(int i=0;i<n;i++)
	{
		cin>>b[i][0]>>b[i][1];
		a1.add(b[i][0]);
	}
	

	return 0;
}














1234 1243 ||13245 13254 13425 13452 








