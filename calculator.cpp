#include "stdio.h"
#include <iostream>
// dont use snake 
int Sum(int first, int second)
{
	int Result = 0;
	Result = first + second;
	return Result;
}

int Subtract(int first, int second)
{
	int Result = 0;
	Result = first - second;
	return Result;
}

int Divide(int first, int second)
{
	int Result = 0;
	Result = first / second;
	return Result;
}

int Multiply(int first, int second)
{
	int Result = 0;
	Result = first * second;
	return Result;
}

int Modulo(int first, int second)
{
	int Result = 0;
	Result = first % second;
	return Result;
}

int main()
{
	int First = 0;
	int Second = 0;
	int Result = 0;
	std::cin >> First;
	std::cin >> Second;
	printf("First number : %d \n Second number : %d \n", First, Second);
	std::cout << "First number : "  << First << "\n";
	std::cout << "Second number : " << Second << "\n";
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			Result = Sum(First, Second);
			//printf("Sum result : %d \n", Result);
			std::cout << "Sum result : " << Result << "\n";
		}
		else if (i == 1)
		{
			Subtract(First, Second);
			//printf("Subtraction result : %d \n", Result);
			std::cout << "Subtraction result : " << Result << "\n";
		}
		else if (i == 2)
		{
			Divide(First, Second);
			//printf("Division result : %d \n", Result);
			std::cout << "Division result : " << Result << "\n";
		}
		else if (i == 3)
		{
			Multiply(First, Second);
			//printf("Multiplication result : %d \n", Result);
			std::cout << "Multiplication result : " << Result << "\n";
		}
		else if (i == 4)
		{
			Modulo(First, Second);
			//printf("Modulo result : %d \n", Result);
			std::cout << "Modulo result : " << Result << "\n";
		}

	}

	return 0;
}













