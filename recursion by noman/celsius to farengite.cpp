#include<stdio.h>
float ConvertTem(float Celsius);
int main()
{
      float far = ConvertTem(10);
       printf("tem in farenhite is %f ",far);  
       return 0;
}
// recursoin 
float ConvertTem(float Celsius)
{
       float farenhite = Celsius*(9/5)+32;   // formula 
       return farenhite;                                                       
}