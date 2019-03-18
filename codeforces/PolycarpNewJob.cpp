#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int m1=0,m2=0;
	while(n--){
	
		char s;
		cin>>s;
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			swap(a,b);
		}
		if(s=='+')
		{
			m1=max(m1,a);
			m2=max(m2,b);
		}
		else
		{
			if((m1<=a && m2<=b) || (m1<=b && m2<=a))
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
}
