// make a file jis mian ak student ki info store krain ga hum
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("text.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("enter the name : \n");
    scanf("%s",name);
    printf("enter age : \n");
    scanf("%d",&age);
    printf("enter cgpa : \n");
    scanf("%f",&cgpa);
  // us file mian lihkna ha info
  fprintf(fptr,"student name = %s\n",name);
  fprintf(fptr,"student age  = %d\n",age);
  fprintf(fptr,"student cgpa = %f\n",cgpa);

    fclose(fptr);
    return 0;
    
    

}