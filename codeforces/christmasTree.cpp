#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y,b,r;
	cin>>y>>b>>r;
	int sol=0;
	int x=y;
	while(x+2>r || x+1>b)
	{
		x--;
	}
	sol+=x*3+3;
	cout<<sol;
	
	
	
	
	
	
	
	
}
