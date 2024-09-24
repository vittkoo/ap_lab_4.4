#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x, y, x_start, x_end, dx, R;
	
	cout << "Enter x_start: "; cin >> x_start;
	cout << "Enter x_end: "; cin >> x_end;
	cout << "Enter dx: "; cin >> dx;
	do {
		cout << "Enter R: ";
		cin >> R;
	} while (R < 0 || R>6);
	
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(7) << "y" << "       |" << endl;
	cout << "---------------------------" << endl;


	x = x_start;
	while (x <= x_end)
	{
		if (x < -R)
			y = R;
		else if (x >= -R && x <= R)
			y = -sqrt(R * R - x * x);
		else if (x > R && x <= 6)
			y = (R / (6.0 - R)) * (x - 6.0);
		else if (x > 6 && x <= 9)
			y = (-3.0 / 3.0) * (x - 9);
		else
			y = (x - 9);
		cout << "|" << setw(7) << setprecision(2) << x
			<< "   |" << setw(10) << setprecision(3) << y
			<< "    |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}