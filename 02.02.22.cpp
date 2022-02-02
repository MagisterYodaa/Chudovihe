Задание 1 
  
  #include <iostream>
#include <string>
#include <Windows.h>


int dac(int* a, int b) {
    for (int i = 0; i < b; i++) {
        std::cout << "-> ";
        std::cin >> a[i];
    }
    for (int i = 0; i < b; i++) {
        std::cout << a[i] << " ";
    }
    return 1;

}
int main()
{
    const int size1 = 8;
    const int size2 = 4;
    int a[size1];
    int b[size2];
    dac(a, size1);
    dac(b, size2);

}

Задание 2 
  
  #include <iostream>

int massive(int(*a)[5]) {
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = 30 + rand() % (60 - 30 + 1);
        }
    }
    return 0;
}

int maximum(int(*a)[5]) {
    int max = a[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}

int minimum(int(*a)[5]) {
    int min = a[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
}

int main()
{

    int c[5][5];
    massive(c);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << c[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Максимальное число: " << maximum(c) << std::endl;
    std::cout << "Минимальное число: " << minimum(c) << std::endl;


}


Задание 3

  
#include <iostream>
#include <Windows.h>




int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	srand(time(0));
	int randomNumber = rand() % 6;
	int randomNumber2 = rand() % 6;
	int brosok;
	int brosok2;
	int summa;
	std::cout << "Нажмите 1 чтобы бросить кубик" << std::endl;

	for (int i = 0; i < 4; i++) {
		std::cout << std::endl;
		std::cin >> brosok;
		std::cin >> brosok2;
		brosok = rand() % (6 - 1 + 1) + 1;
		brosok2 = rand() % (6 - 1 + 1) + 1;
		std::cout << " Первый кубик" << brosok << std::endl;
		std::cout << "Второй кубик " << brosok2 << std::endl;

		if (brosok == 1) {
			std::cout << "________" << std::endl;
			std::cout << "|      |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|______|" << std::endl;
		}
		else if (brosok == 2) {
			std::cout << " ________" << std::endl;
			std::cout << "|   *    |" << std::endl;
			std::cout << "|        |" << std::endl;
			std::cout << "|___*__  |" << std::endl;
		}
		else if (brosok == 3) {
			std::cout << "________" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|___*__|" << std::endl;
		}
		else if (brosok == 4) {
			std::cout << "________" << std::endl;
			std::cout << "| *  * |" << std::endl;
			std::cout << "|      |" << std::endl;
			std::cout << "|_*___*|" << std::endl;
		}
		else if (brosok == 5) {
			std::cout << "________" << std::endl;
			std::cout << "| *  * |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|_*__*_|" << std::endl;
		}
		else if (brosok == 6) {
			std::cout << "________" << std::endl;
			std::cout << "|*   *  |" << std::endl;
			std::cout << "|*   *  |" << std::endl;
			std::cout << "|*___*__|" << std::endl;

		}

		if (brosok2 == 1) {
			std::cout << "________" << std::endl;
			std::cout << "|      |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|______|" << std::endl;
		}
		else if (brosok2 == 2) {
			std::cout << " ________" << std::endl;
			std::cout << "|   *    |" << std::endl;
			std::cout << "|        |" << std::endl;
			std::cout << "|___*__  |" << std::endl;
		}
		else if (brosok2 == 3) {
			std::cout << "________" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|___*__|" << std::endl;
		}
		else if (brosok2 == 4) {
			std::cout << "________" << std::endl;
			std::cout << "| *  * |" << std::endl;
			std::cout << "|      |" << std::endl;
			std::cout << "|_*___*|" << std::endl;
		}
		else if (brosok2 == 5) {
			std::cout << "________" << std::endl;
			std::cout << "| *  * |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|_*__*_|" << std::endl;
		}
		else if (brosok2 == 6) {
			std::cout << "________" << std::endl;
			std::cout << "|*   *  |" << std::endl;
			std::cout << "|*   *  |" << std::endl;
			std::cout << "|*___*__|" << std::endl;

		}

		summa = brosok + brosok2;
		std::cout<< "Cумма" << summa << std::endl;
	}
}
