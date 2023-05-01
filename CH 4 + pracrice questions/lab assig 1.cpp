 #include<stdio.h>
main()
{
	 int salary,grade,bonus; // declare
	 printf("enter the salary\n"); 
	 scanf("%d",&salary);  
	 printf("enter the grade\n");
	 scanf("%d",&grade);
	 if(grade>15){
	 	 bonus = salary*0.5; //
	 	 salary = bonus +salary; // stored bnous value after addition of 50% bonus in  salary 
	 	  printf("now salary is %d",salary);
	 }
	 else{
	 	 bonus = salary*0.25; 
	 	 salary = bonus +salary; //stored bnous value after addition of 25% bonus in  salary 
	 	   printf("now salary is %d",salary);
	 }
	 

}
