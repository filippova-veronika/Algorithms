#pragma once
#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
using namespace std;

// Предварительное объявление класса Characteristic (для friend)
class Characteristic;

// Класс Weapon
class Weapon {
private:
// 1) Сделайте все поля в классе оружия закрытыми.
    string name;
    float weight;
    int damage;

public:
    Weapon(string n, float w, int d);
    ~Weapon();

// 2) Добавьте GET-методы для всех полей.
    string getName();
    float getWeight();
    int getDamage();

// 3) Сделайте SET-метод для наносимого урона.
    void setDamage(int newDamage);

// Вспомогательный метод для вывода
    void displayInfo();

// 6) Сделайте класс Characteristic дружественным для класса оружия.
    friend class Characteristic;
};

/* 5) Создайте класс Characteristic, имеющий одно поле: силу.
Также добавьте конструктор, который будет инициализировать это поле переданным значением.*/
class Characteristic {
private:
    int strength;

public:
    Characteristic(int s); // конструктор

/*7) Создайте в классе Characteristic функцию GetDamage,
принимающую оружие и возвращающую сумму силы и урона от переданного оружия.*/
    int GetDamage(Weapon& w);
};

/* 9) Создайте класс MyMath, имеющий 4 статических метода:
Add (сложение), Sub (вычитание), Mult (умножение) и Div (деление). */
class MyMath {
private:
/* 10) Добавьте статическое поле в класс MyMath,
в котором будет храниться количество вызовов статических методов. */
    static int callCount;

public:
    static int Add(int a, int b);
    static int Sub(int a, int b);
    static int Mult(int a, int b);
    static double Div(int a, int b);

    // Геттер для счётчика (нужен для проверки)
    static int getCallCount();
};

#endif