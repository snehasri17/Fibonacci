// Fibanacci.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
/// fibanacci function takes number of fibanacci series to be printed as input
void fibanacci(int n)
{
	int f0 = 0, f1 = 1, i = 2, result;
	///Prints default two fibanacci numbers
	printf("%d\t%d \t", f0, f1);
	while (i < n)
	{
		result = f0 + f1;
		i++;
		f0 = f1;
		f1 = result;
		//printf("%d \t", result);
		///Checks if the result is divisible by 15. If yes then prints FizzBuzz
		if (result % 15 == 0)
		{
			printf("FizzBuzz\t");
		}
		///Checks if the result is divisible by 3. If yes then prints Buzz
		else if (result % 3 == 0)
		{
			printf("Buzz\t");
		}
		///Checks if the result is divisible by 5. If yes then prints Fizz
		else if (result % 5 == 0)
		{
			printf("Fizz\t");
		}
		/// Check if the the result is prime or not. If it prime it prints BuzzFizz else the value.
		else
		{
			if (result <= 1)
			{
				printf("%d\t", result);
			}
			if (result == 2)
			{
				printf("BuzzFizz\t");
				result = -1;
			}
			if (result % 2 == 0)
			{
				printf("%d\t", result);
			}
			else
			{
				for (int j = 5; j*j <= result; j = j + 6)
				{
					if (result%j == 0 || result % (j + 2) == 0)
					{
						printf("%d\t", result);
						result = -1;
						break;
					}
				}
				if (result > 2)
				{
					printf("BuzzFizz\t");
				}
			}
		}
	}
}

int main()
{
	/// Print fibancci series for n=5
	printf("Fibanacci sequence of length 5 \n");
	fibanacci(5);
	/// Print fibancci series for n=10
	printf("\nFibanacci sequence of length 10\n");
	fibanacci(10);
	/// Print fibancci series for n=20
	printf("\nFibanacci sequence of length 20\n");
	fibanacci(20);
}


