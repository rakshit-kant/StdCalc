#include <bits/stdc++.h>

void switcher(char op, double first_num, double second_num) {
	switch (op) {
	case '+':
		std::println("Solution = {}", first_num + second_num);
		break;
	case '-':
		std::println("Solution = {}", first_num - second_num);
		break;
	case '*':
		std::println("Solution = {}", first_num * second_num);
		break;
	case '/':
		if (second_num == 0) {
			std::println("Error: Number can't be divided by Zero!");
		} else {
			std::println("Solution = {}", first_num / second_num);
		}
		break;

	default:
		std::println("Invalid Operator!");
		break;
	}
}

int main(void) {
	std::println(R"( ____  _      _  ____      _      
/ ___|| |_ __| |/ ___|__ _| | ___ 
\___ \| __/ _` | |   / _` | |/ __|
 ___) | || (_| | |__| (_| | | (__ 
|____/ \__\__,_|\____\__,_|_|\___|
 )");

	double first_num = 0;
	double second_num = 0;
	char op;

	std::print("Enter the First Number: ");
	while (!(std::cin >> first_num)) {
		std::print("Invalid Input! Please enter a correct number: ");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::print("Enter the Operator: ");
	std::cin >> op;

	std::print("Enter the Second Number: ");
	while (!(std::cin >> second_num)) {
		std::print("Invalid Input! Please enter a correct number: ");
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	switcher(op, first_num, second_num);

	return 0;
}
