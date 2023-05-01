#include<stdio.h>
int main()
{
     int age = 22; 
     int _age = 23;
     int *ptr = &age;
     int *_ptr = &_age;

     printf("ptr = %u\t_ptr = %u \t difference is %d\n",ptr,_ptr,ptr -_ptr);
     // diff = 4 bytes ka differ aie ga lekin yeh bytes mian show nahin kare ga 
     // it show int diff  and jab bi diff lein ga dono pointer same typye ka hone chahihain int int or float float or char char
     // ur diff ata bi data types ka  number nahin ata 
     _ptr = &age ; 
    printf("ptr = %u\t_ptr = %u \t Comparison is %d\n",ptr,_ptr,ptr == _ptr);
    // comaparison  main (1) True aie ga b/c dono same address ko point kr rahe hain
 


}