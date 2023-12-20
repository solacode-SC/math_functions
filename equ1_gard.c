#include <stdio.h>

void equ1_gard(float a, float b)
{
	float res = 0;
	if (a == 0)
		printf("the equation has no solution !!");
	else
	{
		res = -(b / a);
		printf("the equation accepte one solution is : %.2f \n", res);
	}
}
