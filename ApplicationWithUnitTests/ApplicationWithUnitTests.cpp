// ApplicationWithUnitTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Calculator.h"

int main()
{
	printf("Hallo");
	
	Calculator calc;
	int sum = calc.sum(2, 3);

	std::cout << "press any key to exit...";

	system("PAUSE");

    return 0;
}

