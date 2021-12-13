#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choise = 0;
	std::cout << "Какое устроиство вы хотите перезагрузить?" << std::endl;
	std::cout << "1-Север" << std::endl;
	std::cout << "2-Юг" << std::endl;
	std::cin >> choise;
	
	if (choise == 1) {
		std::cout << "Перезагрузить север" << std::endl;
	}

	else if (choise == 2) {
		std::cout << "Перезагрузить юг" << std::endl;
	}
	else {
		std::cout << "Другие стороны света не поддерживаются!" << std::endl;
	}

}
