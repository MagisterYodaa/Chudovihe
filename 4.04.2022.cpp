Первое задание 
//struct date
//{
//	int day;
//	int month;
//	int year;
//};
//
//
//int showdate(date my, date second) {
//	if (my.year == second.year) {
//		if (my.month == second.month) {
//			return (second.day - my.day);
//		}
//		else {
//			return (second.day - my.day + 30);
//		}
//	}
//	if (my.month == second.month) {
//		return(second.day - my.day + 365);
//	}
//	else {
//		return(second.day - my.day + 30 + 365);
//	}
//}
//
//
//int main() {
//	date my_date{ 15, 4, 2022 };
//	date second_date{ 25, 4, 2022 };
//	showdate(my_date, second_date);
//	cout << showdate(my_date, second_date) << endl;
//	getchar();
//	return 0;
//}


второе задание


struct date
{
	int day;
	int month;
	int year;
};


int showdate(date my, date second) {
	if (my.year == second.year) {
		if (my.month == second.month) {
			return (second.day - my.day);
		}
		else {
			return (second.day - my.day + 60);
		}
	}
	if (my.month == second.month) {
		return(second.day - my.day + 3600);
	}
	else {
		return(second.day - my.day + 60 + 3600);
	}
}


int main() {
	date my_date{ 30, 15, 3 };
	date second_date{ 25, 15, 3 };
	showdate(my_date, second_date);
	cout << showdate(my_date, second_date) << endl;
	getchar();
	return 0;
}
