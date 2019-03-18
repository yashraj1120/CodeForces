#include<iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;
	string arr;
	cin>>arr;
	string res;
	int count=1;	
	for(int i=0;i<n;i+=count)
	{
		res+=arr[i];
		count++;
	}
	cout<<res;
}
