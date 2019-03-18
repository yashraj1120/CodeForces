#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int k;
	cin>>s>>k;
	int r=k;
	int cane=0;
	int star=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='*')
		{
			star++;
			k++;
			continue;
		}
		if(s[i]=='?')
		{
			cane++;
			k++;
			continue;
		}
		k--;
	}
	if((star==0 && k>cane) || (s.length()-star*2-cane*2)>r)
	{
		cout<<"Impossible";
	}
	else if(k>cane && star!=0)
	{
		string res="";
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='?' && k)
			{
				k--;
				continue;
			}
			if(s[i]=='*' && k)
			{
				k--;
				while(k>0)
				{
					res+=s[i-1];
					k--;
				}
				continue;
			}
			if(s[i]=='*' || s[i]=='?'){
			res.pop_back();
			}
			else
			{
				res+=s[i];
			}
		}
		cout<<res;
	}
	else
	{
		string res="";
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='?' && k)
			{
				k--;
				continue;
			}
			if(s[i]=='*' || s[i]=='?'){
			res.pop_back();
			continue;
			}
			res+=s[i];
		}
		cout<<res;
	}
}
