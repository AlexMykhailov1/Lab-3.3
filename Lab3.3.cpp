// Lab03.3.cpp
// Михайлов Олександр
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, y, R;

	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;

	if (x <= -1)
		y = -x - 1;
	else
		if (x > -1 && x <= 1)
			y = 0;
		else
			if (x > 1 && x <= 1 + 2 * R)
				y = sqrt(R * R - (x - (1 + R)) * (x - (1 + R)));
			else
				y = (-1 / (6 - 2 * R)) * x + (1 + 2 * R) / (6 - 2 * R);

	cout << endl;
	cout << "y = " << y;

	cin.get();
	return 0;
}