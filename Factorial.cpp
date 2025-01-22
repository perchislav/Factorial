#pragma once
#include "Factorial.h"



Number F(int n)
{
	Number val;
	val.init(n);

	Number factorial;

	factorial.size = 0;

	factorial.resizeArr();

	int index = 0;
	factorial.digits[index] = 1;

	for (int i = 2; i <= n; i++)
	{
		 factorial.multiply(i);
	}
	factorial.reverse();
	return factorial;
}
Number F(Number number)
{


	int n = 0;

	for (int i = 0; i < number.size; i++)
	{
		n = n * 10 + number.digits[i];
	}

	return F(n);
}
