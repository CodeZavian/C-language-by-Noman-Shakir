#include<stdio.h>
int main()
{
	 float weight=0.0;  // in pound
	 float height=0.0;// in inches
	 float BMI=0.0;  
	 printf("enter your weight in pound\n");
	 scanf("%f",&weight);
	 printf("enter your height in inches\n");
	 scanf("%f",&height);
	BMI = weight*703/(height*height);
	printf("your BMI weight is %f\n",BMI);
	if (BMI<=18.5)
	{
		 printf("under weight because BMI weight is %f ",BMI);
	}
	else if(BMI>=18.5&&BMI<=24.9)
	{
		 printf("normal because BMI weight is %f ",BMI );
	}
	else if(BMI>=25&&BMI<=29.9)
	{
		 printf("over weight because BMI weight is %f ",BMI);
	}
	else {
	printf("Obese because BMI weight is %f ",BMI);
	}
	return 0;
}