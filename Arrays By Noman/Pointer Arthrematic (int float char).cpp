#include<stdio.h>
int main()
{
    // CASE 1
//    printf("\t\tCASE 1\n");
//     int age = 22;
//     int *ptr =&age;
//     printf("ptr = %u\n",ptr);
//     ptr ++ ; // 4 bytes ki addition ho gi 
//     printf("ptr = %u\n",ptr);
//     ptr--;  // 4 bytes ki substriction ho gi 
//     printf("ptr = %u\n",ptr);

     // CASE 2 
//     printf("\t\tCASE 2\n");
//     float price = 20.00;
//     float *ptr = &price;
//     printf("ptr = %u\n",ptr);
//     ptr ++;    //increase  bytes size according to float +4
//      printf("ptr = %u\n",ptr);
//      ptr --;  // decrease bytes size according to float  -4
//       printf("ptr = %u\n",ptr);
       
       // CASE 3 
     printf("\t\tCASE 3\n");
    char star = '*';
    char *ptr = &star;
     printf("ptr = %u\n",ptr);
     ptr ++;    //increase  1 bytes 
      printf("ptr = %u\n",ptr);
      ptr --;  // decrease 1 bytes 
       printf("ptr = %u\n",ptr);

     return 0;
     
     
}