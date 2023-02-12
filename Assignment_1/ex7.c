/*
 * ex7.c
 *
 *  Created on: Feb 1, 2023
 *      Author: MEGA
 */

#include <stdio.h>

int main(void)
{
	float num1,num2;
	printf("Enter value of a: \n");
	fflush(stdout); fflush(stdin);
	scanf("%f",&num1);
	printf("Enter value of b: \n");
	fflush(stdout); fflush(stdin);
	scanf("%f",&num2);
    num1= num1 * num2;
    num2= num1 / num2;
	num1= num1 / num2;
	printf("After swapping value of a: %f \n",num1);
	printf("After swapping value of b: %f \n",num2);

	return 0;

}
