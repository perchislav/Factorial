#pragma once
#include <iostream>


struct Number
{
	int* digits;
	int size;


	void show()
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << digits[i];
		}
	}

	void reverse()
	{
		for (int i = 0; i < size / 2; i++)
		{
			int temp = digits[i];
			digits[i] = digits[size - i - 1];
			digits[size - i - 1] = temp;
		}
	}

	void resizeArr()
	{
		int* copy = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			copy[i] = digits[i];
		}
		if (size != 0)
			delete[] digits;

		size += 1;
		digits = copy;
	}

	void multiply(int x)
	{
		int t = 0;//перенос при умножении
		for (int i = 0; i < size; i++)
		{
			int pr = digits[i] * x + t;
			digits[i] = pr % 10;//младший разряд
			t = pr / 10;
		}

		while (t)
		{
			resizeArr();
			digits[size - 1] = t % 10;
			t /= 10;
		}
	}
	int getSize(int x)
	{
		int count = 0;
		for (int i = x; i != 0; i /= 10)
		{
			count++;
		}
		return count;
	}
	void init(int x)
	{
		size = getSize(x);

		digits = new int[size];
		int index = size - 1;
		for (int i = x; i != 0; i /= 10)
		{
			digits[index--] = i % 10;
		}
		reverse();
	}

};

Number F(int n);
Number F(Number n);
