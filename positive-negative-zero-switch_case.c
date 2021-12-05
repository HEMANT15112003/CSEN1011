# include <stdio.h>
int main()
{
	int a;
	printf("enter the number\n");
	scanf("%d", &a);
	
	switch(a>0)
{
	case 1:
		printf("POSITIVE");
		break;
}
switch(a<0)
{
	case 1:
		printf("NEGATIVE");
		break;
}
switch(a==0)
{
	case 1:
		printf("zero");
		break;
}
return 0;
}
