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


Задание 3 арифметика
#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Вводите числе. Для заврешения ввода введите ноль." << std::endl;
    int sum = 0;
    int num;
    int i = -1;
    do {
        std::cout << "->";
        std::cin >> num;
        sum += num;
        i++;
    } while (num != 0);

    int arf = sum / i;

    std::cout << "Введено чисел: " << i << std::endl;
    std::cout << "Сумма чисел: " << sum << std::endl;
    std::cout << "Среднее арифметическое: " << arf << std::endl;

}



задание 4 двоичные










задание 5 минимальное число 
#include <iostream>
#include <Windows.h>
#include <string>

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num[5];
	for (int i = 0; i < 5; i++) {
		std::cout << "num[" << i << "] -> ";
		std::cin >> num[i];
	}

	int min = num[0];

	for (int i = 0; i < 5; i++) {
		if (min >= num[i])min = num[i];
	}
	std::cout << "Минимальное число -> " << min << "\n";

}
