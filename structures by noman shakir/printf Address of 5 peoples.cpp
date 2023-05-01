#include<stdio.h>

// fisrt define or make a structure 
 struct Address
 {
     int houseNo;
     int block;
     char city[100];
     char state[100];
 };

 // make a function for print all the info
 void printAdd(struct Address add);
 int main()
 {
      struct Address add[5];  // make an array 
      printf("enter info for 1st person : \n");
      scanf("%d",&add[0].houseNo);
      scanf("%d",&add[0].block);
      scanf("%s",add[0].city);
      scanf("%s",add[0].state);

      printf("enter info for 2nd person : \n");
      scanf("%d",&add[1].houseNo);
      scanf("%d",&add[1].block);
      scanf("%s",add[1].city);
      scanf("%s",add[1].state);

       printf("enter info for 3rd person : \n");
      scanf("%d",&add[2].houseNo);
      scanf("%d",&add[2].block);
      scanf("%s",add[2].city);
      scanf("%s",add[2].state);

       printf("enter info for 4th person : \n");
      scanf("%d",&add[3].houseNo);
      scanf("%d",&add[3].block);
      scanf("%s",add[3].city);
      scanf("%s",add[3].state);

       printf("enter info for 5th person : \n");
      scanf("%d",&add[4].houseNo);
      scanf("%d",&add[4].block);
      scanf("%s",add[4].city);
      scanf("%s",add[4].state);
      printAdd(add[0]);
      printAdd(add[1]);
      printAdd(add[2]);
      printAdd(add[3]);
      printAdd(add[4]);
      

   return 0;
     
 }
 void printAdd(struct Address add)
 {
       printf("adress of 1st person = %d ,%d ,%s ,%s\n",add.houseNo,add.block,add.city,add.state);
 }
 