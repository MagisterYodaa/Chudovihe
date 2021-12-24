#include iostream
#include Windows.h

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 0;
	while (1  10) {
		stdcout  Vlad  stdendl;
		i++;
		if (i  9) break;
	}
	stdcout  Таблица Квадратовstdendl;
	stdcout  -----------------  stdendl;
	stdcout  Число Квадрат  stdendl;
	stdcout  -----------  stdendl;
	for (int i = 1; i  11; i++)
	{
		stdcout  i      i   =   i  i  stdendl;
	}
	stdcout  stdendl;
	stdcout  Таблица квадратов нечетных чисел.  stdendl;
	stdcout  ---------------------------------  stdendl;
	stdcout  Число Квадрат  stdendl;
	stdcout  -------------  stdendl;
	for (int i = 1; i  10; i += 2) {
		stdcout  i    i  =  i  i  stdendl;
	}
	int summ;
	stdcout  Сумма (тенге. -)  stdendl;
	stdcin  summ;
	stdcout  Срок (мес.) -  stdendl;
	int month;
	stdcin  month;
	stdcout  Процент (годовых.) -  stdendl;
	int procent, evryMonth;
	stdcin  procent;
	stdcout  --------------------------  stdendl;
	stdcout  Сумма   Процент   Месяцев  stdendl;
	stdcout  --------------------------  stdendl;
	float plate = summ  month;
	for (int i = 1; i = month; i++) {
		evryMonth = summ  month;
		evryMonth = (evryMonth  0.14) + plate;
		stdcout  i  ' '  summ  ' '  evryMonth  stdendl;
		summ -= plate;

	}
		
}
