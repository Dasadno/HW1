#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "ru");
	/*
	int main_num, num1, num2;
	int answer;
	std::cout << "������� ���������� �����: ";
	std::cin >> main_num;
	if (main_num > 99) {
		std::cout << "��� ����� ������ ���������� �����.";
		return 0;
	}
	num1 = main_num / 10;
	num2 = main_num % 10;
	answer = num2 * 10 + num1;
	std::cout << "������������ �����: " << answer;
	*/
	/*
	char math_action;
	double num1, num2;

	std::cout << "������� ������ �����: ";
	std::cin >> num1;
	std::cout << "������� ������ �����: ";
	std::cin >> num2;
	std::cout << "������� ���. ��������: ";
	std::cin >> math_action;

	if (math_action == '/' && num2 == 0) {
		std::cout << "������ �� ���� ������. ";
		return 0;
	}
	else if (math_action == '%' && num2 == 0) {
		std::cout << "�� �� ������ ������� ������������� �������. ";
		return 0;
	}
	else if (math_action == '+') {
		std::cout << "�����: " << num1 + num2;
	}
	else if (math_action == '-') {
		std::cout << "�����: " << num1 - num2;
	}
	else if (math_action == '*') {
		std::cout << "�����: " << num1 * num2;
	}
	else if (math_action == '/') {
		std::cout << "�����: " << num1 / num2;
	}
	else if (math_action == '%') {
		std::cout << "�����: " << num1 / 100 * num2;
	}
	else {
		std::cout << "���������� ������ ������ ������. ";
		return 0;
	}
	*/
	
	/*
	double s = 0, t = 0;
	std::cout << "������� ���������� � ����������: ";
	std::cin >> s;
	std::cout << "������� ����� � �����: ";
	std::cin >> t;
	double v = s / t;
	std::cout << "����� ������ � ��������� ��� ����� ����� �� ���������: " << v << "��/�";
	*/
	

	/*
	int input_hours1, input_min1, input_sec1, input_hours2, input_min2, input_sec2;
	int diff_hours, diff_min, diff_sec;

	std::cout << "������� ���, � ������� �� ������ �������: ";
		std::cin >> input_hours1;
	input_hours1 = input_hours1 - 24 * (input_hours1 / 24);

	std::cout << "������� ������, � ������� �� ������ �������: ";
		std::cin >> input_min1;
	input_min1 = input_min1 - 60 * (input_min1 / 60);

	std::cout << "������� �������, � ������� �� ������ �������: ";
		std::cin >> input_sec1;
	input_sec1 = input_sec1 - 60 * (input_sec1 / 60);


	std::cout << "������� ���, � ������� �� ��������� �������: ";
		std::cin >> input_hours2;
		input_hours2 = input_hours2 - 24 * (input_hours2 / 24);

		std::cout << "������� ������, � ������� �� ��������� �������: ";
			std::cin >> input_min2;
		input_min2 = input_min2 - 60 * (input_min2 / 60);

		std::cout << "������� �������, � ������� �� ��������� �������:";
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
	
	std::cout << "��������� ����� �������: " << money << " ������";
	*/
	/*
	double path;
	double petrol_consumption;
	double petrol92, petrol95, petrol100;
	double value;
	double cost92, cost95, cost100;

	std::cout << "������� ������ ������� �� 100��: ";
	std::cin >> petrol_consumption;
	std::cout << "������� ������ ����� �������: ";
	std::cin >> path;

	std::cout << "������� ��������� 92 �������: ";
	std::cin >> petrol92;
	std::cout << "������� ��������� 95 �������: ";
	std::cin >> petrol95;
	std::cout << "������� ��������� 100 �������: ";
	std::cin >> petrol100;

	value = (path / 100) * petrol_consumption;
	cost92 = value * petrol92;
	cost95 = value * petrol95;
	cost100 = value * petrol100;
	std::cout << "--------------------------------------------------------------";
	std::cout << "\n \n";
	std::cout << "��������� ������� �� 92 �������: " << cost92 << "\n";
	std::cout << "��������� ������� �� 95 �������: " << cost95 << "\n";
	std::cout << "��������� ������� �� 100 �������: " << cost100 << "\n";
	*/


	return 0;
}
