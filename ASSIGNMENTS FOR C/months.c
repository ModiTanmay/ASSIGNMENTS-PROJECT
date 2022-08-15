#include<stdio.h>
int main()
{
	int month;
	
	printf("\n enter a month");
	scanf("%d",&month);
	
	if(month=january||month=march||month=may||month=july||month=august||month=october||month=december)
	{
		printf("\n there are 31 days in this month");
	}
	
	else if(month==february)
	{
		printf("\n there are 28 days in this month");
	}
	
	else if(month==april||month==june||month==september||month==november)
	{
		printf("\n there are 30 days in this month");
		}	
else
{
	printf("\n please enter valid month");
}

return 0;
}