// labb2.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header.h"

using namespace std;

#define summa(a, c) ((a) + (c)) // Макрос для вычисления суммы двух чисел

int main() {
    setlocale(LC_ALL, "RU");
    cout << MySpace::func(20) << endl;
    cout << MySpace::func(40) << endl;
    cout << MySpace::func(60) << endl;
    cout << summa(33, 27);
    cout << endl;
    cout << "Для закрытия консоли, введите любой символ и нажмите Enter";
    int a = 0;
    cin >> a;

    return 0;
}

