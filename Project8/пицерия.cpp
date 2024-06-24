#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string pizzas[4] = { "���������", "4 ����", "���������", "���������" };
	double pizza_prices[4] = { 10.99, 11.99, 12.99, 9.99 };
	string drinks[3] = { "����", "�����", "������" };
	double drink_prices[3] = { 1.99, 1.99, 1.99 };
	int pizza_choice, drink_choice, pizza_quantity, drink_quantity;
	double total_price = 0;

	cout << "���� ��������:" << endl;
	cout << "�����:" << endl;
	for (int i = 0; i < 4; i++) {
		cout << i + 1 << ". " << pizzas[i] << " - $" << fixed << setprecision(2) << pizza_prices[i] << endl;
	}

	cout << endl << "�������:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << ". " << drinks[i] << " - $" << fixed << setprecision(2) << drink_prices[i] << endl;
	}

	cout << endl << "������� ��� �����: ";
	cin >> pizza_choice;
	cout << "������� ����������: ";
	cin >> pizza_quantity;

	total_price += pizza_prices[pizza_choice - 1] * pizza_quantity;

	cout << "������� ��� �������: ";
	cin >> drink_choice;
	cout << "������� ����������: ";
	cin >> drink_quantity;

	total_price += drink_prices[drink_choice - 1] * drink_quantity;

	if (total_price > 50) {
		total_price *= 0.8; // ��������� ������ 20%
	}

	if (pizza_quantity >= 5) {
		total_price -= pizza_prices[pizza_choice - 1]; // ����� ����� � �������
	}

	if (drink_quantity > 3 && drink_prices[drink_choice - 1] > 2) {
		total_price *= 0.85; // ��������� ������ 15% �� �������
	}

	cout << endl << "���:" << endl;
	cout << pizzas[pizza_choice - 1] << " - " << pizza_quantity << " - $" << fixed << setprecision(2) << pizza_prices[pizza_choice - 1] * pizza_quantity << endl;
	cout << drinks[drink_choice - 1] << " - " << drink_quantity << " - $" << fixed << setprecision(2) << drink_prices[drink_choice - 1] * drink_quantity << endl;
	cout << "����� � ������: $" << fixed << setprecision(2) << total_price << endl;

	return 0;
