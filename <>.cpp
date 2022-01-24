#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int randomNumber = rand() % 100;
	cout << "Компьютер задумал число угодай его" << endl;

	int a;
	while (true) {
		cout << "-> ";
		cin >> a;
		if (a == randomNumber) {
			cout << "Ты попал в точку" << std::endl;
			break;
		}
		else if (a > randomNumber) {
			cout << "Берите ниже" << endl;
		}
		else if (a < randomNumber) {
			cout << "Берите выше" << endl;
		}

	}
}


наоборот 
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int randomNumber;
	int low = 1;
	int high = 100;
	int mid, compare;
	int guessNumber;
	cout << "Ты загадал число, компьютер угадывает" << endl;
	do {
		mid = (low + high) / 2;
		printf("Ваше число %d ?\n", mid);
		cout << "1 - Число больше\n2 - Число меньше\n0 - Да";
		cin >> compare;

		if (compare == 1) {
			low = mid + 1;
		}
		else if (compare == 2) {
			high = mid + 1;
		}
		else if (compare == 0) {
			printf("Ваше число %d", mid);
		}
	} while (compare != 0);
	

	
}
