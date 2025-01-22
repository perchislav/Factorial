#define _CRT_SECURE_NO_WARNINGS //для работы старых функций в vs


#include <iostream>
#include "Factorial.h"





  

int main()
{
	Number f = F(5);
	f.show();

	std::cout << std::endl;
	
	Number f1 = F(f);
	f1.show();


	
