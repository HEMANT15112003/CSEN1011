# include <stdio.h>
int main()
{
	float principle , rate;
	int time;
	
	printf("what is the principle value : %f\n", principle);
	scanf("%f", &principle);
	
	printf("whta is the rate of interest is %f\n", rate);
	scanf("%f",&rate);
	
	printf("what is the time period is %d", time );
	scanf("%d",&time);
	
	printf("the value of simple interst is %f", principle*rate*time/100);
	
	printf("the value of compound interest is %f", principle*(1 + rate/100)*time);
	
	return 0;
}
