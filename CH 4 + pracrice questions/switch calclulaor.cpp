#include<stdio.h>
main()
{ 
 
     int number1,number2,d;
    int choice;
     printf("enter the number\t\n");
     scanf("%d%d",&number1,&number2);
     printf("\n\tenter 1 for addition \n\t 2 for substraction \n\t 3 for multi \n\t 4 for divide\n");
     scanf(" %d",&choice);
     if (number2>number1)
     {
          d      =    number1;
          number1 = number2;
         number2   = d;
     }
     switch (choice)
     {
     case 1: printf("%d + %d = %d ", number1,number2,number1+number2);
        break;
        case 2: printf("%d - %d = %d " ,number1,number2,number1-number2);
        break;
        case 3: printf("%d * %d = %d " ,number1,number2,number1*number2);
        break;
        case 4: printf("%d / %d = %d " ,number1,number2,number1/number2);
        break;
     default:printf("enter wrong choice");
        break;
     }
     





}