#include<stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("\n enter the numbers");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i/n!=0)
		{
			sum=sum+i;
		}
		
	}
	printf("\n sum is:%d",sum);
	
	return 0;
}
