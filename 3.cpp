#include "Math.h"
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double S, n, summa, x, a, b, k, l, y, e, U, rumma;
	k = 10;
	a = 0.1;
	b = 0.8;
	y = 0;
	e = 1;
	U = 0;
	l = (b - a) / k;
	summa = 0;
	S = 0;
	n = 1;
	rumma = 0;
	for (x = 0.1; x <= 0.8; x += l)
	{
		for (n = 1; n <= 10; n++)
		{
			S = (pow(-1, n + 1) * (pow(x, 2 * n))) / (2 * n * (2 * n - 1));
			summa += S;

		}
		for (e = 1; e <= 10; e += 1)
		{
			U = (pow(-1, e + 1) * (pow(x, 2 * e))) / (2 * e * (2 * e - 1));
			rumma += U;
		}
		y = x * atan(x) - log(sqrt(1 + x * x));
		cout << "x= " << x << "   " << "SN= " << summa << "   " << "SE= " << rumma << "   " << "y= " << y << endl;
	}
	return 0;
}