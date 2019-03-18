#include<bits/stdc++.h>

using namespace std;
int main()
{
	string s;
	cin>>s;
	int k=s.length()%2?s.length()/2:s.length()/2-1;
	cout<<s[k];
	int i=1;
	while(true)
	{
		if(k+i>=s.length())
		{
			break;
		}
		cout<<s[k+i];
		if(k-i>=0)
		{
		cout<<s[k-i];
		}
		else{
		break;
	}
		i++;
		
	}
}
