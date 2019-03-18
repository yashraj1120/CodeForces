#include<iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=a[i][0];j<=a[i][1];j++)
		{
			if(j*2<=a[i][1])
			{
				cout<<j<<" "<<j*2<<endl;
				break;
			}
		}
		
	}
	return 0;
}
