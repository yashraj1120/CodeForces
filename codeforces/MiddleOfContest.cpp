#include<bits/stdc++.h>

using namespace std;

int main()
{
string s1,s2;
cin>>s1>>s2;
int a=0,b=0;
int hr=0,minu=0;
a=(s1[0]-48)*10+(s1[1]-48);
b=(s2[0]-48)*10+(s2[1]-48);
int c=(s1[3]-48)*10+(s1[4]-48);
int d=(s2[3]-48)*10+(s2[4]-48);
if(a>b)
{
	hr=b;
	minu=d;
}
else if(b>a)
{
	hr=a;
	minu=c;
}
else
{
	hr=a;
	minu=min(c,d);
}

int mins=abs(a-b)*60+abs(c-d);
mins/=2;
hr+=mins/60;
minu+=mins%60;

string hrs=to_string(hr);
if(hrs.length==1)
{
	
}
cout<<diff;

}

