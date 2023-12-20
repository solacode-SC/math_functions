#include <stdio.h>
#include <math.h>

void equ2_gard(double a, double b, double c)
{
	double x;
	double y;	
	double res = (b * b) - 4 * a * c;
	if (res == 0)
	{
		x = -b / (2 * a);
		printf("the equation accepte one solution x : %lf\n", x);
	}
	else if (res > 0)
	{
		x = (-b - sqrt(res)) / (2 * a);
		y = (-b + sqrt(res)) / (2 *a);
		printf("the function accepts two solutions in R Group x and y :\n x = %lf , y = %lf\n", x, y);
	}
	else if (res < 0)
	{
		x = -b / (2 * a); // real part of solution 
		y = sqrt(-res) / (2 * a); // imaginary part of solutions
		printf("the function accepts two solutions in C group x and y :\n x = %lf - %lfi, y = %lf + %lfi \n", x, y, x, y);
	}
}

int main()
{
	double a = 4;
	double b = 2;
	double c = 1;
	equ2_gard(a, b, c);
	return 0;
}

