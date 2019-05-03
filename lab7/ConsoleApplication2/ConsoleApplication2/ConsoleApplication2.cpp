#include "pch.h"
#include <iostream> 
#include <Windows.h> 
using namespace std;
int main()
{
	SetConsoleOutputCP(1251); // Связывает текст вывода с языком LucidaConsole 
	SetConsoleCP(1251); // Вывод текста в консоли на русском языке
	int count;
	float num;
	puts("Вам предстоит ввести 10 чисел в пределах от 0 до 25.");
	for (count = 1; count <= 10; count++)
	{
		do
		{
			printf("Введите %u-ое число: ", count);
			cin >> num;
		} while (num < 0 || num >25);
	}
	puts("ok");
}