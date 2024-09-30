#include <iostream>
#include <string>
#include <windows.h>

struct person
{
	std::string city = "Москва";
	std::string street = "Арбат";
	int number_home = 12;
	int number_flat = 8;
	int index = 123456;
};

void increment(person& p)
{
	{ p.city = "Ижевск"; }
	{ p.street = "Пушкина"; }
	{ p.number_home = 59; }
	{ p.number_flat = 143; }
	{ p.index = 953769; }
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	person number_one;
	std::cout << "Город: " << number_one.city << std::endl;
	std::cout << "Улица: " << number_one.street << std::endl;
	std::cout << "Номер дома: " << number_one.number_home << std::endl;
	std::cout << "Номер квартиры: " << number_one.number_flat << std::endl;
	std::cout << "Индекс: " << number_one.index << std::endl;
	std::cout << "\n\n\n";

	person number_two;
	increment(number_two);
	std::cout << "Город: " << number_two.city << std::endl;
	std::cout << "Улица: " << number_two.street << std::endl;
	std::cout << "Номер дома: " << number_two.number_home << std::endl;
	std::cout << "Номер квартиры: " << number_two.number_flat << std::endl;
	std::cout << "Индекс: " << number_two.index << std::endl;

}
/*
*
* Город: Москва
Улица: Арбат
Номер дома: 12
Номер квартиры: 8
Индекс: 123456
*
Город: Ижевск
Улица : Пушкина
Номер дома : 59
Номер квартиры : 143
Индекс : 953769
*/