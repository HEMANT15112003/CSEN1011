# include <stdio.h>
int main()
{
	int num,rev=0;
	int remainder;
	printf("enter the number :");
	scanf("%d",&num);
	 
	 while(num!= 0)
	 {
	    remainder = num%10;
	    rev = (rev*10) + remainder;
	    num = num/10;
	 }
	 printf("the reverse number : %d",rev);
	 return 0;
}
