#include <lostream>//подключение библиотеки для работы с вводом-выводом в консоль
#include <string>

int main()//точка входа в приложение
{
    const float f_const = 2.3;
    const std::string s_const = "Windows";

    setlocale(LC_ALL,"ru")//устанавливаем работу с кириллицей
    std::cout << "Спецсимволы \"\\\"!\n";//вывод спецсимволов
    std::cout << "First string!\n";//вывод в консоль с переносом строки (\n)
    std::cout << "Первая строка!\n" << "Вторая строка!\n";

    int x = 150;
    float f = 15.933;
    char c= 250;
    std::cout << "x = " << x << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "c = " << c << std::endl;

    short date = 6;
    std::string mont = "September";
    int year = 2000;
    std::cout << "Моя дата рождения: " << date << " " << month << " " << year << "года\n";
    std::cout << f_const << " " << s_const << std::endl;

}