#include<stdio.h>
     void noman();
     void ammar();            // declare function
     
        
     int main() 
     {
        printf("enter n for noman and a for ammar\n");
           char ch;
           scanf("%c",&ch);
           noman();
           return 0;
     }

     
    void noman()
    {
           printf("my name is noman shakir\n");
           ammar();
     }
    void ammar()
     {
           printf("my name is ammar ");
     }
