#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "ru");
	/*
	int main_num, num1, num2;
	int answer;
	std::cout << "Введите двузначное число: ";
	std::cin >> main_num;
	if (main_num > 99) {
		std::cout << "Вам нужно ввести двузначное число.";
		return 0;
	}
	num1 = main_num / 10;
	num2 = main_num % 10;
	answer = num2 * 10 + num1;
	std::cout << "Перевернутое число: " << answer;
	*/
	/*
	char math_action;
	double num1, num2;

	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;
	std::cout << "Введите мат. действие: ";
	std::cin >> math_action;

	if (math_action == '/' && num2 == 0) {
		std::cout << "Делить на ноль нельзя. ";
		return 0;
	}
	else if (math_action == '%' && num2 == 0) {
		std::cout << "Вы не можете считать отрицательный процент. ";
		return 0;
	}
	else if (math_action == '+') {
		std::cout << "Ответ: " << num1 + num2;
	}
	else if (math_action == '-') {
		std::cout << "Ответ: " << num1 - num2;
	}
	else if (math_action == '*') {
		std::cout << "Ответ: " << num1 * num2;
	}
	else if (math_action == '/') {
		std::cout << "Ответ: " << num1 / num2;
	}
	else if (math_action == '%') {
		std::cout << "Ответ: " << num1 / 100 * num2;
	}
	else {
		std::cout << "Попробуйте ввести другой символ. ";
		return 0;
	}
	*/
	
	/*
	double s = 0, t = 0;
	std::cout << "Введите расстояние в километрах: ";
	std::cin >> s;
	std::cout << "Введите время в часах: ";
	std::cin >> t;
	double v = s / t;
	std::cout << "Чтобы успеть к аэропорту вам нужно ехать со скоростью: " << v << "км/ч";
	*/
	

	/*
	int input_hours1, input_min1, input_sec1, input_hours2, input_min2, input_sec2;
	int diff_hours, diff_min, diff_sec;

	std::cout << "Введите час, в который вы начали поездку: ";
		std::cin >> input_hours1;
	input_hours1 = input_hours1 - 24 * (input_hours1 / 24);

	std::cout << "Введите минуту, с которой вы начали поездку: ";
		std::cin >> input_min1;
	input_min1 = input_min1 - 60 * (input_min1 / 60);

	std::cout << "Введите секунду, с которой вы начали поездку: ";
		std::cin >> input_sec1;
	input_sec1 = input_sec1 - 60 * (input_sec1 / 60);


	std::cout << "Введите час, в который вы закончили поездку: ";
		std::cin >> input_hours2;
		input_hours2 = input_hours2 - 24 * (input_hours2 / 24);

		std::cout << "Введите минуту, в которую вы закончили поездку: ";
			std::cin >> input_min2;
		input_min2 = input_min2 - 60 * (input_min2 / 60);

		std::cout << "Введите секунду, в которую вы закончили поездку:";
			std::cin >> input_sec2;
		input_sec2 = input_sec2 - 60 * (input_sec2 / 60);

	if (input_hours1 > input_hours2) {
		diff_hours = 24 - (input_hours1 - input_hours2);
	}
	else {
		diff_hours = input_hours2 - input_hours1;
	}
	if (input_min1 > input_min2) {
		diff_min = 60 - (input_min1 - input_min2);
	}
	else {
		diff_min = input_min2 - input_min1;
	}
	if (input_sec1 > input_sec2) {
		diff_sec = 60 - (input_sec1 - input_sec2);
	}
	else {
		diff_sec = input_sec2 - input_sec1;
	}

	double money = diff_sec * (1.0 / 30.0) + diff_min * 2.0 + diff_hours * 120.0;
	
	std::cout << "Стоимость вашей поездки: " << money << " гривен";
	*/
	/*
	double path;
	double petrol_consumption;
	double petrol92, petrol95, petrol100;
	double value;
	double cost92, cost95, cost100;

	std::cout << "Введите расход бензина на 100км: ";
	std::cin >> petrol_consumption;
	std::cout << "Введите длинну вашей поездки: ";
	std::cin >> path;

	std::cout << "Введите стоимость 92 бензина: ";
	std::cin >> petrol92;
	std::cout << "Введите стоимость 95 бензина: ";
	std::cin >> petrol95;
	std::cout << "Введите стоимость 100 бензина: ";
	std::cin >> petrol100;

	value = (path / 100) * petrol_consumption;
	cost92 = value * petrol92;
	cost95 = value * petrol95;
	cost100 = value * petrol100;
	std::cout << "--------------------------------------------------------------";
	std::cout << "\n \n";
	std::cout << "Стоимость поездки на 92 бензине: " << cost92 << "\n";
	std::cout << "Стоимость поездки на 95 бензине: " << cost95 << "\n";
	std::cout << "Стоимость поездки на 100 бензине: " << cost100 << "\n";
	*/


	return 0;
}
