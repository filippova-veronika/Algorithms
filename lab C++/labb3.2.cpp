// labb3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
/* 1) Создайте функцию, которая принимает 2 указателя (на начало и конец массива) и 
которая возвращает сумму всех элементов массива.*/
int ArrSum(int* begin, int* end) {
    int sum = 0;
    for (const int* ptr = begin; ptr != end; ++ptr) {
        sum += *ptr;
    }
    return sum;
}

// 3) Создайте 2 функции, принимающих 2 параметра и возвращающих их сумму и их разность соответственно.
int summa(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}

// 4) Создайте функцию, принимающую 1 параметр типа char.
// 5) Созданная функция должна возвращать указатель на одну из двух функций (суммы или разности).
int (*getOperation(char op))(int, int) {
    if (op == '+') {
        return &summa;
    }
    else if (op == '-') {
        return &subtract;
    }
    else {
        return nullptr;
    }
}

int main() {
    setlocale(LC_ALL, "RU");
// 2) Проверьте правильность работы функции, вызвав её и передав массив из нескольких чисел.
    int nums[] = { 1, 2, 3, 4, 5 };
    int result = ArrSum(nums, nums + 5);
    cout << "Сумма элементов массива: " << result << endl;

/* 6) Проверьте работу созданных функций, вызвав сначала ту, что возвращает указатель, а потом
вызвав и эту функцию по указателю, получив правильное значение, которое затем выведите в консоль.*/
    cout << "Проверка функции суммы и разности: " << endl;
    cout << "summa(13, 10) = " << summa(13, 10) << endl;
    cout << "subtract(13, 10) = " << subtract(13, 10) << endl;

    int (*operationPtr)(int, int) = getOperation('+'); // Получаем указатель на функцию суммы
    if (operationPtr != nullptr) {
        int result1 = operationPtr(20, 5);
        cout << "Через указатель на сумму: 20 + 5 = " << result1 << endl;
    }

    operationPtr = getOperation('-'); // Получаем указатель на функцию разности
    if (operationPtr != nullptr) {
        int result2 = operationPtr(20, 5);
        cout << "Через указатель на разность: 20 - 5 = " << result2 << endl;
    }

// 7) Создайте динамический указатель типа float.
    float* dynamicfloat = new float(7.81f);

// 8) Выведите его в консоль, а после удалите его из памяти с помощью delete.
    cout << "Динамический указатель: " << *dynamicfloat << endl;
    delete dynamicfloat;

    return 0;
}

