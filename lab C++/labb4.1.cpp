// labb4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

// 1) Создайте класс оружия со следующими полями : название оружия, наносимый урон и его вес
class Weapon {
private:
    string name; // Название
    int damage; //  Урон
    float weight; // Вес

    // 2) Создайте конструктор, принимающий 3 параметра и использующий их для инициализации переменных класса.
public:
    Weapon(string weaponName, int weaponDamage, float weaponWeight) {
        name = weaponName;
        damage = weaponDamage;
        weight = weaponWeight;
        cout << "Конструктор с параметрами: " << name << endl;
    }
    /* 3) Создайте конструктор без параметров, который будет вызывать конструктор
 из предыдущего пункта, передавая туда какие-то значения по умолчанию. */
    Weapon() : Weapon("Базовое оружие", 10, 2.0f) {
        cout << "Конструктор без параметров" << endl;
    }
    // Метод вывода информации
    void displayInfo() {
        cout << "Оружие: " << name << endl;
        cout << "Урон: " << damage << endl;
        cout << "Вес: " << weight << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");

// 4) Создайте 2 объекта, используя конструктор с параметрами и без.
    Weapon bow("Эльфийский лук", 20, 1.8f); // Объект через конструктор с параметрами
    Weapon defaultWeapon; // Объект через конструктор без параметров

// 5) Выведите значения всех переменных обоих экземпляров в консоль.
    cout << "Объекты класса Weapon.\n";
    cout << "Первый объект (с параметрами)" << endl;
    bow.displayInfo();
    cout << "Второй объект (без параметров)" << endl;
    defaultWeapon.displayInfo();

    return 0;
}

