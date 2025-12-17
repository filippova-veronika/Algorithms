#include "Weapon.h"
// Реализация класса Weapon

Weapon::Weapon(string n, float w, int d) {
    name = n;
    weight = w;
    damage = d;
    cout << "Создано оружие: " << name << endl;
}

Weapon::~Weapon() {
    cout << "Удаление " << name << " | вес: " << weight << " кг, урон: " << damage << endl;
}

// 2) GET-методы
string Weapon::getName() {
    return name;
}

float Weapon::getWeight() {
    return weight;
}

int Weapon::getDamage() {
    return damage;
}

// 3) SET-метод для урона
void Weapon::setDamage(int newDamage) {
    if (newDamage >= 0) {
        damage = newDamage;
    }
    else {
        cout << "Ошибка: урон не может быть отрицательным!" << endl;
    }
}

void Weapon::displayInfo() {
    cout << "Оружие: " << name << " | вес: " << weight << " кг | урон: " << damage << endl;
}

// Реализация класса Characteristic

Characteristic::Characteristic(int s) {
    strength = s;
}

// 7) GetDamage благодаря friend имеет доступ к private-полю damage
int Characteristic::GetDamage(Weapon& w) {
    return strength + w.damage;
}

// Реализация класса MyMath

// 10) Инициализация статического поля
int MyMath::callCount = 0;

// 11) Исправьте все 4 метода так, чтобы в каждом делался инкремент созданной статической переменной.
int MyMath::Add(int a, int b) {
    callCount++;
    return a + b;
}

int MyMath::Sub(int a, int b) {
    callCount++;
    return a - b;
}

int MyMath::Mult(int a, int b) {
    callCount++;
    return a * b;
}

double MyMath::Div(int a, int b) {
    callCount++;
    if (b != 0) {
        return static_cast<double>(a) / b;
    }
    else {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
}

int MyMath::getCallCount() {
    return callCount;
}