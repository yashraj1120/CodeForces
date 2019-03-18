#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
string s[n];
for(int i=0;i<n;i++)
{
	cin>>s[i];
}
for(int i=0;i<n;i++)
{
	string::iterator k=s[i].begin();
	sort(k,k+s[i].length());
	if(s[i][0]==s[i][s[i].length()-1])
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<s[i]<<endl;
	}
	/*int a[26]={0};
	int count=0;
	for(int j=0;j<s[i].length();j++)
	{
		if(a[s[i][j]-97]==0){
		count++;
		}
		a[s[i][j]-97]++;
	}
	if(count==1)
	{
		cout<<-1<<endl;
	}
	else{
	for(int j=0;j<26;j++)
	{
		while(a[j]!=0)
		{
			cout<<(char)(j+97);
			a[j]--;
		}
	}	
	cout<<endl;
	}*/
}

return 0;	
}
