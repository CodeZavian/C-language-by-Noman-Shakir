#include<stdio.h>
 int main(void)
 {
 	int x, i, j;
 	// prompt user for input
 	printf("%s", "Enter an integer in the range 1-20:");
 	scanf("%d", &x); // read values for x 
	 	for (i = 1; i <= x; i++) { // count from 1 to x
		for (j = 1; j <= x; j++) { // count from 1 to x
 		if (i==j)
 				printf("%c",'x'); // output @
	 		else {
	 			printf("-");
			 }
 				
 		} 
		 }	// end inner for
 		
 	 // end outer for
  // end of main
}

