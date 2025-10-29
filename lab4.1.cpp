// lab4_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <memory>
using namespace std;
class Weapon {
public:
	string name;
	int damage;
	float ves;
public:
	Weapon(string name, int damage, double ves) {
		this->name = name;     // используем this для явного указания
		this->damage = damage;
		this->ves = ves;
	}

	// Конструктор без параметров
	
	Weapon() : Weapon("SWORD", 10, 1.5) {}
	void displayInfo() const {
		std::cout << "Название: " << this->name << std::endl;
		std::cout << "Урон: " << this->damage << std::endl;
		std::cout << "Вес: " << this->ves <<  std::endl;
		std::cout << "------------------------" << std::endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Weapon sword("BIG SWORD", 30, 2.5);
	Weapon defaultWeapon;

	cout << "Информация о первом оружии:" << std::endl;
	sword.displayInfo();

	std::cout << "Информация о втором оружии:" << std::endl;
	defaultWeapon.displayInfo();

}


	

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
