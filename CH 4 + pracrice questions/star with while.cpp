#include<stdio.h>
main () {
	int i = 0;
	while (i<10) {
		int j = 0;
		while (j<10) {
			if (i<j) //(i==0||j==0||i==9||j==9) // (i>j||j>i)  // (i<j)      // (i+j==9) 
			printf("*");
			else{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
}
