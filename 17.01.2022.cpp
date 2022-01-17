таблица задание 1 
#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Введите число: " << std::endl;
	int i;
	std::cin >> i;
	while (i < 11) {
		std::cout << i * 1 << std::endl;
		std::cout << i * 2 << std::endl;
		std::cout << i * 3 << std::endl;
		std::cout << i * 4 << std::endl;
		std::cout << i * 5 << std::endl;
		std::cout << i * 6 << std::endl;
		std::cout << i * 7 << std::endl;
		std::cout << i * 8 << std::endl;
		std::cout << i * 9 << std::endl;
		std::cout << i * 10 << std::endl;

		break;
	}
	
}


задание 2 шахматная доска
#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (int y = 0; y <= 7; y++)
    {
        if (y % 2 == 0)
            for (int x = 1; x <= 4; x++)
                std::cout << "* " << "  ";
        else
            for (int x = 1; x <= 4; x++)
                std::cout << "  " << "* ";

        std::cout << std::endl;
    }
    return 0;
}



