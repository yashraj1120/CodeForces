#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w,h,u1,h1,u2,h2;
	cin>>w>>h>>u1>>h1>>u2>>h2;
	int tw=w;
	while(h>0)
	{
		tw+=h;
		if(h==h1)tw-=u1;
		if(h==h2)tw-=u2;
		tw=max(tw,0);
		h--;
	}
	cout<<tw;
}
