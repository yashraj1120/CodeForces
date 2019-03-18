#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,k;
cin>>n>>k;
int ans=0;
ans+=n==1?2:n*3;
ans+=min(k-1,n-k);
cout<<ans;


}

