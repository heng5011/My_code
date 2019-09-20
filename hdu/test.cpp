#include <iostream>
#include <cmath>
using namespace std;

double func(double x)
{
	return (8 * pow(x, 4) + 7 * pow(x, 3) + 2 * pow(x, 2) + 3 * x + 6);
}

double SOLVE(double Y) {
	double x1 = 0; double x2 = 100;
	while (x2 - x1 > 1e-8)
	{
		if (func((x1 + x2) / 2) == Y)
			return (x1 + x2) / 2;
		else if (func((x1 + x2) / 2) < Y) {
			x1 = (x1 + x2) / 2;
		}
		else if (func((x1 + x2) / 2) > Y) {
			x2 = (x1 + x2) / 2;
		}
	}
	return (x1 + x2) / 2;
}

int main() {
	int T; double Y;
	cin >> T;
	while(T--) {
		cin >> Y;
		if (Y < 6 || Y > 807020306) {
			cout << "No solution!" << endl;
		} else {
			printf("%.4lf\n", SOLVE(Y));
		}
	}
}
