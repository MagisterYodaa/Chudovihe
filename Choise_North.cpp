#include "Choise_North.h"

void On_Off() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choise = 0;
	std::cout << "����� ���������� �� ������ �������������?" << std::endl;
	std::cout << "1-�����" << std::endl;
	std::cout << "2-��" << std::endl;
	std::cin >> choise;

	if (choise == 1) {
		std::cout << "������������� �����" << std::endl;
	}

	else if (choise == 2) {
		std::cout << "������������� ��" << std::endl;
	}
	else {
		std::cout << "� ���� ���� ���������� ����� 2 ������� �����!" << std::endl;
	}
}