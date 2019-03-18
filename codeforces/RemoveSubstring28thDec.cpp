#include <bits/stdc++.h> 
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
int count=1;
int midx;
int midy;
if(s.length()==1)
{
	cout<<1;
}
else
{
int i=1;
while(s[i]==s[i-1])
{
	i++;
}
midx=i;
if(midx>=s.length())
{
	count=n*(n+1)/2;
	cout<<count%998244353;
}
else{

//cout<<"midx"<<midx<<endl;
i=s.length()-2;
while(s[i]==s[i+1])
{
	i--;
}
midy=i;
count+=(s.length()-1-midy)+midx;
//cout<<"firstcount"<<count<<endl;
if(s[midx-1]==s[midy+1])
{
	count+=(midx-1)*(s.length()-1-midy-1)+1+(s.length()-1-midy-1)+(midx-1);
}
cout<<count%998244353;
}

}





}
