#include<stdio.h>
int main()
{
     int row;
        printf("Enter rows");
        scanf("%d",&row);

        for(int r=1;r<=row;r++){

          for(int c=1;c<=row;c++){

               if(r+c==row/2+2||c-r==row/2||r-c==row/2||r+c==((row*3)/2)+1){
                    printf(" *");
               }
          else{
                printf(" ");
          }

          }
          printf("\n");



        }

}