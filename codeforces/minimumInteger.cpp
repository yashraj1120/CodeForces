#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int i=1;
		if((float)a/c>1)
		{
			cout<<c<<endl;
		}
		else {
		cout<<c*(b/c+1)<<endl;
		}
		
		/*while(true)
		{
			if((c*i<a || c*i>b)){
			
			cout<<c*i<<endl;
			break;
			
			}
			i++;
		}*/
		//cout<<(r&&a-r>=1?a-r:(a-c>=1?a-c:(b%c?b+(b%c):b+c)))<<endl;
	}
}
