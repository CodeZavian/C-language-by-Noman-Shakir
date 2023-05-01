#include<stdio.h>
int main()
{
    int marks[3];  // this is aray   // maximum index     
     printf("enter phy :\n");
     scanf("%d",&marks[0]);
     printf("enter sci :\n");
     scanf("%d",&marks[1]);
     printf("enter math :\n");
     scanf("%d",&marks[2]);      // jo decalre krain ga us se chota size rahkein ga agr size nhara howa to run time error aei ga
    
    printf("phy is %d , sci is %d , math is %d ",marks[0],marks[1],marks[2]);
}