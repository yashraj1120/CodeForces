#include<iostream>
using namespace std;
int main()
{
    int num[]={2,3,4,5,6,7};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int p=5;
        int c=0;
        while(arr[i]>0)
        {
        //	cout<<arr[i]<<"?"<<num[p]<<endl;
        	if(arr[i]%num[p]!=1 && arr[i]>=num[p])
			{
            	c+=arr[i]/num[p];
            	arr[i]=arr[i]%num[p];
			}
            else if(arr[i]>=num[p])
            {
            	c+=arr[i]/num[p]-1;
            	arr[i]=(arr[i]%num[p])+num[p];
			}
			p--;
        }
        cout<<c<<endl;
    }
}
