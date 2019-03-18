#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<=9)
	{
		cout<<1<<"\n"<<n;
	}
	else
	{
		cout<<n<<endl;
	/*	int count=0;
		int i=1;
		string s="";
		while(n>0)
		{
		while(n%i==0 && n>0)
		{
			count++;
			s+=(i+48);
			s+=" ";
			n=n-i;
		}
		i++;
		}
		if(n!=0)
		{
			count++;
			s+=(n+48);
		}
		cout<<count<<"\n"<<s;*/
		for(int i=1;i<=n;i++)
		{
			cout<<1<<" ";	
		}
	}
}
