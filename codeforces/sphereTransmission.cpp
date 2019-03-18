#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	set<int> a;
	cin>>n;
	a.insert(n*(n+1)/2);
	a.insert(1);
	int i=2;
	int p=1;
	while(i<=n)
	{
		int ans=0;
		p=1;
		do
		{
		//	cout<<p<<endl;
			p+=i;
			if(p>n)
			{
				p=p-n;
			}			
			ans+=p;
		}while(p!=1);
	//cout<<"ans"<<ans<<endl;
	a.insert(ans);
	i++;	
	}
	set<int>::iterator k;
	for (k = a.begin(); k!=a.end();  ++k) 
        cout << *k << " "; 
	/*set::iterator k=a.begin();
	while(k!=a.end())
	{
		cout<<a.
	}*/
	return 0;
	
	
	
	
	
	
}
