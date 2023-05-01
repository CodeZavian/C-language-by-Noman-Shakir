#include<stdio.h>
main()
{
	 int salary,grade,bonus;
	 printf("enter salry :\n");
	 scanf("%d",&salary);
	 printf("enter grade :\n");
	 scanf("%d",&grade);
	 if(grade>15){
	 	 bonus = salary*0.5;
	 	 salary = bonus + salary;
	 	 printf("salary after 50% bonus is : %d",salary);
	 }
	 else{
	 	 bonus = salary*0.25;
	 	 salary = bonus + salary;
	 	 printf("salary after 25% bonus is : %d",salary);
	 }
	 
}
