#include <stdio.h>

int main()
{
	float inch, feet;
	printf("Enter the value in inches : ");
	scanf("%f", &inch);
	feet = inch / 12;
	printf("The value in feet : %.2f", feet);
}
