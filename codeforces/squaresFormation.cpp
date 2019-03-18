#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	int rc=floor(sqrt(n));
	count+=rc*2;
//cout<<"rc value"<<rc<<endl;
	int k=(n-rc*rc);
	//cout<<"n-rc*rc"<<n-rc*rc<<endl;
	if(k>0)
	{
		count+=1;
		//cout<<k/rc;
		
		if(k/rc>0 &&k!=rc)
		{
			count+=1;
		}
	}
	//cout<<"k value"<<k<<endl;
	cout<<count;
}
