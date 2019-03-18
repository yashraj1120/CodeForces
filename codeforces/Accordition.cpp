#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int v=0;
	vector<char> h;
	int maxl=-1;
	int col=0;
	int point=-1;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='[' && v==0)
		{
			h.push_back('[');
			v++;
		}
		else if(s[i]==':'&& v!=0)
		{
			if(col<2)
			{
				h.push_back(':');
				
				col++;
				if(col==2)
				{
					point=v;
				}
			}
			else
			{
				h.erase(h.begin()+point);
				v--;
				h.push_back(':');
				point=v;
			}
			v++;			
		}
		else if(s[i]=='|' && col>0)
		{
			h.push_back('|');
			v++;
		}
		else if(s[i]==']'&&col==2)
		{
			if(point+2>maxl)
			{
				maxl=point+2;
			}
		}
	}
	cout<<maxl;
}
