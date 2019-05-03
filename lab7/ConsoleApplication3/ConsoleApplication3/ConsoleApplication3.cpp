// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

int main()
{
	int row, column;
	for (row = 1; row <= 10; row++)
	{
		if (row <= 5)
		{
			for (column = 1; column <= 6-row; column++)
				printf("*");
		}
		else
			for (column = 1; column <= row-5; column++)
				printf("*");
			putchar('\n');
	}
}