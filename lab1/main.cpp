#include <lostream>//����������� ���������� ��� ������ � ������-������� � �������
#include <string>

int main()//����� ����� � ����������
{
    const float f_const = 2.3;
    const std::string s_const = "Windows";

    setlocale(LC_ALL,"ru")//������������� ������ � ����������
    std::cout << "����������� \"\\\"!\n";//����� ������������
    std::cout << "First string!\n";//����� � ������� � ��������� ������ (\n)
    std::cout << "������ ������!\n" << "������ ������!\n";

    int x = 150;
    float f = 15.933;
    char c= 250;
    std::cout << "x = " << x << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "c = " << c << std::endl;

    short date = 6;
    std::string mont = "September";
    int year = 2000;
    std::cout << "��� ���� ��������: " << date << " " << month << " " << year << "����\n";
    std::cout << f_const << " " << s_const << std::endl;

}