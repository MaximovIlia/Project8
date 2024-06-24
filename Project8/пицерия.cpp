#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string pizzas[4] = { "Пепперони", "4 сыра", "Гавайская", "Маргарита" };
	double pizza_prices[4] = { 10.99, 11.99, 12.99, 9.99 };
	string drinks[3] = { "Кола", "Фанта", "Спрайт" };
	double drink_prices[3] = { 1.99, 1.99, 1.99 };
	int pizza_choice, drink_choice, pizza_quantity, drink_quantity;
	double total_price = 0;

	cout << "Меню пиццерии:" << endl;
	cout << "Пиццы:" << endl;
	for (int i = 0; i < 4; i++) {
		cout << i + 1 << ". " << pizzas[i] << " - $" << fixed << setprecision(2) << pizza_prices[i] << endl;
	}

	cout << endl << "Напитки:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << ". " << drinks[i] << " - $" << fixed << setprecision(2) << drink_prices[i] << endl;
	}

	cout << endl << "Введите код пиццы: ";
	cin >> pizza_choice;
	cout << "Введите количество: ";
	cin >> pizza_quantity;

	total_price += pizza_prices[pizza_choice - 1] * pizza_quantity;

	cout << "Введите код напитка: ";
	cin >> drink_choice;
	cout << "Введите количество: ";
	cin >> drink_quantity;

	total_price += drink_prices[drink_choice - 1] * drink_quantity;

	if (total_price > 50) {
		total_price *= 0.8; // Применяем скидку 20%
	}

	if (pizza_quantity >= 5) {
		total_price -= pizza_prices[pizza_choice - 1]; // Пятая пицца в подарок
	}

	if (drink_quantity > 3 && drink_prices[drink_choice - 1] > 2) {
		total_price *= 0.85; // Применяем скидку 15% на напитки
	}

	cout << endl << "Чек:" << endl;
	cout << pizzas[pizza_choice - 1] << " - " << pizza_quantity << " - $" << fixed << setprecision(2) << pizza_prices[pizza_choice - 1] * pizza_quantity << endl;
	cout << drinks[drink_choice - 1] << " - " << drink_quantity << " - $" << fixed << setprecision(2) << drink_prices[drink_choice - 1] * drink_quantity << endl;
	cout << "Итого к оплате: $" << fixed << setprecision(2) << total_price << endl;

	return 0;
