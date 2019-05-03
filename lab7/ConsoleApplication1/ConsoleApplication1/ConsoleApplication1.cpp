#include "pch.h"
#include <iostream> 
#include <Windows.h>
using namespace std;
int main()
{
	float cost = 0;
	float tax,total;

	SetConsoleOutputCP(1251); // Связывает текст вывода с языком LucidaConsole 
	SetConsoleCP(1251); // Вывод текста в консоли на русском языке
	puts("Введите стоимость товаров в пределах от 1 до 50 долларов. Ввод значения 0 прекратит работу программы.");
	cin >> cost;

	while (cost != 0)
	{
		while ((cost < 1 || cost>50) && cost!=0)
		{
			puts("Введеное значение выходит за границы стоимости");
			puts("Введите стоимость товаров в пределах от 1 до 50 долларов. Ввод значения 0 прекратит работу программы.");

			cin >> cost;
		}
		if (cost == 0)
			break;
		tax = 0.06*cost;
		total = cost + tax;
		puts("Цена\t\tНалог\t\tИтого");
		printf("%.2f\t\t%.2f\t\t%.2f\n", cost, tax, total);
		puts("Введите стоимость товаров в пределах от 1 до 50 долларов. Ввод значения 0 прекратит работу программы.");
		cin >> cost;
	}
}