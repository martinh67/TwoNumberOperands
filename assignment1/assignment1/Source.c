/* Assignment 1 program */

#include <stdio.h>

/* Function main begins program execution */
int main(void)
{
	int num1; /* first number to be input by the user*/
	int num2; /* second number to be inpur by user*/
	int sum; /* variable to hold the sum of num1 and num2 */
	int difference; /* variable to hold the difference of num1 and num2 */
	int product; /* variable to hold the product of num1 and num2*/
	int quotient; /* variable to hold the quotient of num1 and num2*/
	int remainder; /* variable to hold the remainder of num1 and num2*/

	printf("Enter first number\n"); /* prompt */
	scanf("%d", &num1); /* reads first number*/

	printf("\nEnter second number\n"); /* prompt */
	scanf("%d", &num2); /* reads second integer*/

	sum = num1 + num2; /* calculates the sum */
	difference = num1 - num2; /* calculates the difference */
	product = num1 * num2; /* calculates the product */
	quotient = num1 / num2; /* calculates the quotient */
	remainder = num1 % num2; /* calculates the remainder */

	/* Prints the sum, difference, product, quotient and remainder */
	printf("\nThe Sum is %d\nThe Difference is %d\nThe Product is %d\nThe Quotient is %d\nThe Remainder is %d\n",
		sum, difference, product, quotient, remainder); 

	return 0; /* indicates program has ended successfully */
}