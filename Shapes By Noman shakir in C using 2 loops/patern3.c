#include<stdio.h>

int main(){

    int i,j,rows;

    printf("Enter rows\n");
    scanf("%d",&rows);//4

    for(i = rows;i>=1;i--){

        for(j = 1;j<=rows*2-1;j++){//1<=7

            if(j<=i || j>rows*2-1 -i) {//2<=1 ||7>=6
                printf("*");//*+++++*
            
            }
            else {
                printf(" ");//+
            }
        }printf("\n");
    }
}