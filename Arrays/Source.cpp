#include <iostream>

void ex1()
{
	//all the code for exercise 1
	int x = 2;
	int values[] = { 2,6,10,14 };
	std::cout << values[2];
	std::cout << ++values[0];
	std::cout << values[1]++;
	std::cout << values[++x];
	std::cout << values[4];
	// Value 2 prints out the number 10 because 2 = 0, 6 = 1, 10 = 2, 14 = 3
	// ++values[0] prints out 3, haven't figured out why yet.
	// Values [1]++ prints out 6
	// Values[++x] prints out 14
	// Values[4] prints out -858993460

	// This was question 2
	system("pause");
}

void ex2()
{

	for (int i = 10; i > 0; i--)
	{
		printf("%i", i);
	}

	// This was question 3
	system("pause");


	int num[5];
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	num[3] = 40;
	num[4] = 50;

	for (int i : num)
	{

		std::cout << i << std::endl;
	}
	system("pause");
}

void ex3()
{
	for (int i = 10; i > 0; i--)
	{
		printf("%i", i);
	}

	// This was question 3
	system("pause");

}


void ex4()
{
	int quit = 911;
	const int SIZE = 5;
	int num[SIZE];
	int input = 0;

	while (input != quit)
	{
		std::cout << "Enter a number: ";

		for (int i = 0; i < 5; ++i)
		{
			std::cin >> input;
			num[i] = input;
			std::cout << "entered num:" << num[i] << std::endl;
				
		}
		std::cout << "The numbers you entered are : " << std::endl;
		for (int i = SIZE-1; i >= 0; --i)
		{
			std::cout << num[i] << std::endl;

		}
	}

}

void ex5()
{
	const int REAL = 10;
	int input = 0;
	int num[REAL];
	
	int array[10];
	std::cin >> input;
	num[i] = input
}

int main()
{
	//ex1();
	//ex2();
	//ex3();
	//ex4();
	ex5();
}