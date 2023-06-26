#include<iostream>
#include<Windows.h>

int main() {

	setlocale(LC_ALL, "Russian");

	std::string name;
	std::cout << "Введите имя: ";
	SetConsoleCP(1251);
	std::cin >> name;
	SetConsoleCP(866);
	std::cout << std::endl << "Здравствуйте, " << name;

}