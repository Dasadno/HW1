#include <iostream>


int main()
{
	setlocale(LC_ALL, "ru");

	char math_action;
	double num1, num2;

	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;
	std::cout << "Введите мат. действие: ";
		std::cin >> math_action;
		if (num1 == '/' && num2 == 0) {
			std::cout << "Делить на ноль нельзя. ";
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
	

	return 0;
}
