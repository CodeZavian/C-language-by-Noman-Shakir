#include<stdio.h>
int CalculatePer(int scince,int math,int urdu);  //declare
int main()
{
      int math = 100,science = 98,urdu = 97;
      int percentage = CalculatePer(math,science,urdu);    // calling
      printf("percentage is %d ",percentage);

       return 0;
} 
// recursoi function
int CalculatePer(int scince,int math,int urdu)
{
       return (scince+math+urdu)/3;    // return to main function
}
