#include<stdio.h>
main()
{
	float salary,hourly_rate,hourly_time,salary_with_overtime;
//	printf("enter salary : \n");
//	scanf("%f",&salry);
	printf("enter hourly rate : \n");
	scanf("%f",&hourly_rate);
	printf("enter hourly time : \n");
	scanf("%f",&hourly_time);
	
if (hourly_time>40){
	salary = hourly_rate*hourly_time;
	salary_with_overtime = salary+hourly_rate/2;
	printf("Salary With Overtime is : %f\n ",salary_with_overtime);
}
else {
	 salary = hourly_rate*hourly_time;
	 printf("Salary is : %f\n ",salary);
}

	
}