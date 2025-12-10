// labb4.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

class Weapon {
private:
    string name;
    int damage;
    float weight;

public:
    Weapon(string weaponName, int weaponDamage, float weaponWeight) // Конструктор с параметрами
        : name(weaponName), damage(weaponDamage), weight(weaponWeight) {
        cout << "Создано оружие: " << name << endl;
    }

    Weapon() : Weapon("Стандартный меч", 10, 2.5f) {}     // Конструктор без параметров

    // 1) Создайте деструктор для класса оружия в котором выведите в консоль
    // все данные оружия и сообщение о том, что он удаляется.
    ~Weapon() {
        cout << "Удаление оружия: " << name << endl;
        cout << "Урон: " << damage << endl;
        cout << "Вес: " << weight << " кг" << endl;
    }

    // Метод вывода информации
    void displayInfo() {
        cout << "Оружие: " << name << endl;
        cout << "Урон: " << damage << endl;
        cout << "Вес: " << weight << " кг" << endl;
    }

    /* 5) Добавьте метод в класс оружия, принимающий в качестве параметра максимально допустимый вес
    для оружия, и который возвращает true или false. Если максимально допустимый вес меньше, чем 
    вес оружия, то возвращается true, а иначе false. */
    bool isTooHeavy(float maxWeight) {
        return weight > maxWeight;
    }

    // 7. Перегрузка метода
    float getTotalWeight(float additionalWeight) {
        return weight + additionalWeight;
    }

    // 6 - 8. Метод с объектом (сразу через перегрузку)
    float getTotalWeight(const Weapon& other) {
        return getTotalWeight(other.weight);
    }
};


int main(){
	setlocale(LC_ALL, "RU");
    // Обычный и динамический объекты
    // 2) Обычный объект
    Weapon sword("Огненный клинок", 30, 3.5f);
    sword.displayInfo();

    // 3) Динамический объект
    Weapon* pBow = new Weapon("Эльфийский лук", 20, 1.6f);
    cout << "Динамический объект: " << endl;
    pBow->displayInfo();

    // 4) Удаление динамического объекта (вызов деструктора)
    cout << "\nУдаляем динамический объект..." << endl;
    delete pBow;

    // Проверка методов
    Weapon axe("Гномий топор", 25, 5.0f);
    Weapon dagger("Кинжал", 12, 0.8f);

    // 5. Проверка isTooHeavy
    float max = 3.0f;
    cout << "\nМакс. переносимый вес: " << max << endl;
    cout << "Топор слишком тяжёл? " << (axe.isTooHeavy(max) ? "Да" : "Нет") << endl;
    cout << "Кинжал слишком тяжёл? " << (dagger.isTooHeavy(max) ? "Да" : "Нет") << endl;

    // 6, 7, 8. Проверка перегрузки
    cout << "\nСуммарный вес:" << endl;
    cout << "Топор + Кинжал = " << axe.getTotalWeight(dagger) << " кг" << endl;
    cout << "Топор + 2 кг = " << axe.getTotalWeight(2.0f) << " кг" << endl;

    cout << "\nЗавершение программы" << endl;
    // Деструкторы для sword, axe, dagger вызовутся автоматически
    return 0;
}

