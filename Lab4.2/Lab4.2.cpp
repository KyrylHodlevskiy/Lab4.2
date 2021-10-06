#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()

{
	double x, xp, xk, dx, A, B, y;
	float e = exp(1.0);
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 1 + x;
		if (x <= 4)
			B = pow(e, log(2 + 2 * x) + 2 * x);
		else
			if (4 < x && x <= 7)
				B = 1 / tan((1 + x) / 9) + 8 * x;
			else
				B = 1 - 7 * x + pow(x, 2) - 2 * pow(x, 3);
		y = A + B;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}