#include<stdio.h>

void factorial(int n,int k)
{
	if(n==1||n==0)
	{
		printf("factorial = %d",k);
		return;
	}
	 factorial(n-1,n*k);
}
int main()
{
	int n;
	scanf("%d",&n);
	factorial(n,1);
	return 0;
}

