// labb2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");

	float num1, num2, res; // Создаем переменные
	std::cout << "Введите первое число: "; // Получаем число от пользователя
	std::cin >> num1; // Сохраняем полученное значение

	std::cout << "Ввведите второе число: "; // Получаем число от пользователя
	std::cin >> num2; // Сохраняем полученное значение

	res = (num1 + num2) / 2; // Вычисляем среднее арифметическое двух чисел
	std::cout << "Среднее арифметическое: " << res << std::endl; // Выводим результат

	char math; // Вводим переменную для хранения знака операции
	std::cout << "Введите знак операции (+, -, *, /): "; // Получаем знак операции от пользователя
	std::cin >> math; // Сохраняем полученный знак в переменную


	// Проверяем переменную math и выполняем нужную операцию

	/*
	if (math == '+') {
		res = num1 + num2;
		std::cout << "Результат: " << num1 << " + " << num2 << " = " << res << std::endl;
	}
	else if (math == '-') {
		res = num1 - num2;
		std::cout << "Результат: " << num1 << " - " << num2 << " = " << res << std::endl;
	}
	else if (math == '*') {
		res = num1 * num2;
		std::cout << "Результат: " << num1 << " * " << num2 << " = " << res << std::endl;
	}
	else if (math == '/') {
		if (num2 != 0) { // Проверяем деление на ноль
			res = num1 / num2;
			std::cout << "Результат: " << num1 << " / " << num2 << " = " << res << std::endl;
		}
		else {
			res = 0;
			std::cout << "Ошибка: деление на ноль!" << std::endl;
		}
	}
	else {
		std::cout << "Ошибка: введен неккоректный знак!" << std::endl;
	}
	*/
	
	
	switch (math) { // Проверяем какой знак ввел пользователь
	case '+':
		res = num1 + num2;
		std::cout << "Результат: " << num1 << " + " << num2 << " = " << res << std::endl;
		break;

	case '-':
		res = num1 - num2;
		std::cout << "Результат: " << num1 << " - " << num2 << " = " << res << std::endl;
		break;

	case '*':
		res = num1 * num2;
		std::cout << "Результат: " << num1 << " * " << num2 << " = " << res << std::endl;
		break;

	case '/':
		if (num2 != 0) { // Проверяем деление на ноль
			res = num1 / num2;
			std::cout << "Результат: " << num1 << " / " << num2 << " = " << res << std::endl;
		}
		else {
			std::cout << "Ошибка: деление на ноль!" << std::endl;
			res = 0;
		}
		break;

	default: // Если введен неизвестный знак
		res = 0;
		std::cout << "Ошибка: введен некорректный знак!" << std::endl;
		break;
	}
	std::cout << "Результат: " << res << std::endl;

	return 0; // Завершение программы
}
