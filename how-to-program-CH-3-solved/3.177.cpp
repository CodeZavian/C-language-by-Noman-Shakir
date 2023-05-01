#include<stdio.h>
int main () {
	float amount, interestRate;
	int years;
	printf ("Enter mortgage amount\n");
	scanf ("%f", &amount);
	printf ("Enter interest rate  ");
	scanf ("%f", &interestRate);
	printf ("Enter term in years  ");
	scanf ("%d", &years);
	amount += amount * interestRate * years;
	printf ("Monthly amount payable  %f", amount / (12.0 * years));
}