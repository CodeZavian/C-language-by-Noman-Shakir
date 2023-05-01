#include<stdio.h>
#include<math.h>
double hypotnous(double base,double per)
{
       double H = sqrt((pow(base,2))+(pow(per,2)));
       return H;
}
int main()
{
     double base,per;
     printf("enter the base and perpendicular\n");
     scanf("%lf%lf",&base,&per);
     printf("hypotnous = %.2f when base = %1.lf and perpendicular = %1.lf",hypotnous(base,per),base,per);

}