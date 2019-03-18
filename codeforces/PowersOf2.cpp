#include <bits/stdc++.h> 
using namespace std;

int flag=0;
void convert(string s)
{
	int i;
	//reverse(s.begin(),s.end());
	
cout<<s.substr(1,s.length()-1);
	return ;
}
void powerOf2(int power,int num,int k,string s)
{
	if(flag==1)
	{
		return;
	}
	if(num==0&&k==0)
	{
		flag=1;
		cout<<"YES"<<endl;
		convert(s);
		return;
	}
	if(k<0||num<0||power<1)
	{
		return;
	}
	powerOf2(power/2,num-power,k-1,s+" "+to_string(power));
	powerOf2(power,num-power,k-1,s+" "+to_string(power));
	powerOf2(power/2,num,k,s);
}

int main()
{
string s="";
int n,k;
cin>>n>>k;
int max=(int)floor((double)log(n)/log(2));
//cout<<(int)pow(2,max);
powerOf2((int)pow(2,max),n,k,s);
//s+=to_string(23);
if(flag==0)
{

cout<<"NO";
}
}
	
