// labb4.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Weapon.h"

int main() {
    setlocale(LC_ALL, "RU");

// 4) Проверьте работу всех новых методов.
    cout << " Проверка класса Weapon " << endl;
    Weapon sword("Огненный меч", 3.5f, 25);

    cout << "\n// 2. GET-методы:" << endl;
    cout << "Название: " << sword.getName() << endl;
    cout << "Вес: " << sword.getWeight() << " кг" << endl;
    cout << "Урон: " << sword.getDamage() << endl;

    cout << "\n// 3. SET-метод:" << endl;
    sword.setDamage(30);
    cout << "Новый урон: " << sword.getDamage() << endl;

    sword.displayInfo();

/* 8) Проверьте созданный функционал, создав оружие,
экземпляр класса Characteristic и вызвав его метод GetDamage.*/
    cout << "\n Проверка Characteristic " << endl;
    Characteristic hero(20); // сила = 20
    cout << "// 8. Итоговый урон (сила + урон оружия): "
        << hero.GetDamage(sword) << endl;

// 12) Проверьте все 4 метода, выведя результат их работы в консоль.
    cout << "\n Проверка MyMath " << endl;
    cout << "// 12. MyMath::Add(10, 5) = " << MyMath::Add(10, 5) << endl;
    cout << "// 12. MyMath::Sub(15, 4) = " << MyMath::Sub(15, 4) << endl;
    cout << "// 12. MyMath::Mult(3, 7) = " << MyMath::Mult(3, 7) << endl;
    cout << "// 12. MyMath::Div(20, 4) = " << MyMath::Div(20, 4) << endl;
    cout << "// 12. MyMath::Div(10, 0) = " << MyMath::Div(10, 0) << endl; // проверка ошибки

/* 13) Проверьте значение статической переменной, выведя её в консоль.
Её значение должно равняться количеству вызовов методов у класса MyMath. */
    cout << "\n// 13. Количество вызовов методов MyMath: "
        << MyMath::getCallCount() << endl;

    return 0;
}