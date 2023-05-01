#include<stdio.h>

// we are bound to use alias so use typrdef

typedef struct BankAccount {
      
      int accountNumber;
      char name[100];
}acc;

int main()
{
      acc acc1 = {123,"NOMAN"};  // deaclare structre varaible acc ka nam se kr sakte hain
      acc acc2 = {112,"ZAVI"};
      acc acc3 = {131,"NOMI"}; 

       printf("1st acc name is %s\n",acc1.name);
       printf("1st acc number is %d\n",acc1.accountNumber);
       printf("2nd acc name is %s\n",acc2.name);
       printf("2nd acc number is %d\n",acc2.accountNumber);
       printf("3rd acc name is %s\n",acc3.name);
       printf("3rd acc number is %d\n",acc3.accountNumber);

       return 0;
   
}