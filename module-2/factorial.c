# include <stdio.h>
int main()
{
	int num,i,factorial=1;
	printf("enter the number :");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		factorial = factorial*i;
	}
	printf("factorial of %d : %d",num,factorial);
	return 0;
}
