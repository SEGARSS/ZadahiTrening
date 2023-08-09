/*В спортзал ежедневно приходит какое-то количество посетителей.
Необходимо предложить пользователю ввести такие данные:
сколько человек посетило спортзал за день,
ввести возраст каждого посетителя
и в итоге показать возраст самого старшего и самого молодого из них,
а так же посчитать средний возраст посетителей.*/

#include<iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));


	int pipl = 0;
	int voz = 0;
	int vozMin = 100; //Для записи минимального количества лет
	int vozMax = 0;
	int VozSred = 0;
	int vozOb = 0; //Общая сумма для расчёта среднего возраста.
	cout << "Сколько людей посетило зал?:" << endl;
	cout << "Введите количество: ";
	cin >> pipl;

	for (int i = 0; i < pipl; i++)
	{

		cout << "Введите возраст: " << i + 1 << " -го посетителя - ";
		cin >> voz;

		if (voz > vozMax)
			vozMax = voz;
		if (voz < vozMin)
			vozMin = voz;
		vozOb += voz;

	}

	VozSred = vozOb / pipl;

	cout << "Средний возраст всех посетитей: - " << voz << endl;
	cout << "Самый взрослы: - " << vozMax << endl;
	cout << "Самы молодой: - " << vozMin << endl;

	return 0;
}
/*
for (int j = 0; j <= i; j++)
{
	cout << "Введите возраст каждого посетителя" << endl;
	cin >> voz;
	j = voz;
	cout << " Возраст людей посетивших зал: " << j;
}
*/