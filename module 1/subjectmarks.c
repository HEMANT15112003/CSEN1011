# include <stdio.h>
int main()
{
	float maths, phy, chem, eng, sst;
	
	printf("marks in maths is %f\n", maths);
	scanf("%f", &maths);
	
	printf("marks in phy is %f\n", phy);	
	scanf("%f", &phy);
	
	printf("marks in chem is %f\n", chem);
	scanf("%f", &chem);
	
	printf("marks in eng is %f\n", eng);
	scanf("%f", &eng);
	
	printf("marks in sst is %f\n", sst);
	scanf("%f", &sst);
	
	printf("the total marks is %f\n", (maths + phy + chem + eng + sst));
	
	printf("the average marks is %f\n", (maths + phy + chem + eng + sst)/5);
	
	printf("the percentage  is %f\n", (maths + phy + chem + eng + sst)/5);
}
