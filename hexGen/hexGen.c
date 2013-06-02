/*
 *	program to convert input to hex
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int input = 0;

	int A = 10,
			B = 11,
			C = 12,
			D = 13,
			E = 14,
			F = 15,
			multiple = 0,
			remainder = 0;
	
	printf("\nEnter a number between 0 and 255: ");
	scanf("%d", &input);

	multiple = input / 16;
	remainder = input % 16;

	printf("The number in hex is: ");

	if(multiple > 9)
	
		switch (multiple)
		{
			case 10:
				printf("A");
				break;
			case 11:
				printf("B");
				break;
			case 12:
				printf("C");
				break;
			case 13:
				printf("D");
				break;
			case 14:
				printf("E");
				break;
			case 15:
				printf("F");
				break;
		}
	else
		printf("%d", multiple);

	if(remainder > 9)
	
		switch (remainder)
		{
			case 10:
				printf("A");
				break;
			case 11:
				printf("B");
				break;
			case 12:
				printf("C");
				break;
			case 13:
				printf("D");
				break;
			case 14:
				printf("E");
				break;
			case 15:
				printf("F");
				break;
		}
	else
		printf("%d", remainder);

	printf("\n\n");

	return 0;
}
