#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		/*if(x1>x2)
		{
			x1^=x2;
			x2^=x1;
			x1^=x2;
			y1^=y2;
			y2^=y1;
			y1^=y2;
		}
		if(x2>=x1 && y2<=y1)
		{
			cout<<x2<<" "<<y2;
		}
		else if(x2>y1 || y2<x1)
		{
			cout<<x2<<" "<<y1;
		}
		else 
		{
			if(x1!=x2)
			{
				cout<<x1
			}
		}*/
		int i=x1,j=y2;
		while(i==j)
		{
			i++;
			j--;
		}
		cout<<i<<" "<<j<<endl;
	}
}
