#include<stdio.h>

struct student 
{

    int roll;
    char name[100];
    float cgpa;
};
void printinfo(struct student s1); // declare a function

int main()
{
         struct student s1 = {115,"NOMAN",3.6};  // decalre structure and intialzize it
         // now call the function 
         printinfo(s1); 
         return 0;

}
void printinfo(struct student s1)
{
	   printf("stdent information\n");
        printf("name is %s\n",s1.name);
        printf("roll number is %d\n",s1.roll);
        printf("cgpa is %f\n",s1.cgpa); 
}
