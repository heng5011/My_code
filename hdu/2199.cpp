#include <iostream>
#include <cmath>
using namespace std;

double x, y;

double func (double x) {
	return (8 * pow (x, 4) + 7 * pow (x, 3) + 2 * x * x + 3 * x + 6);
}

/*double BinSearch (double left, double right, double key) {
	double mid = (left + right) / 2;
	while ((right - left) > 1e-8) {
		if (func (mid) > key) right = mid;
		else if (func (mid) < key) left = mid;
		else if (func (mid) == key) return mid;
	}
	return mid;
}*/

double BinSearch (double left, double right, double key) {
	//double mid = (left + right) / 2;
	while ((right - left) > 1e-8) {
		if (func ((left + right) / 2) > key) right = (left + right) / 2;
		else if (func ((left + right) / 2) < key) left = (left + right) / 2;
		else if (func ((left + right) / 2) == key) return (left + right) / 2;
	}
	return (left + right) / 2;
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> y;
		if (y < 6 || y > 807020306) {
			cout << "No solution!" << endl;
		} else {
			//cout << BinSearch(y) << endl;
			//cout << BinSearch(0.0, 100.0, y) << endl;
			printf ("%.4f\n", BinSearch (0.0, 100.0, y));
		}
	}
	return 0;
}
