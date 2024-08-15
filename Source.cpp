#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// operating with variables


	int main()
	{
		// declaring variables:
		int a;
		int	b;
		int	c;
		int result;

		// process:assinging value with the assignment operator, =
		a = 5;
		b = 2;
		c = 4;
		a = a++;
		result = a - b + c;


		std::cout << result;

		std::cout << std::endl << std::endl;

		return 0;
	
}
