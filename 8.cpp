#include <iostream>
#include <cmath>

using namespace std;

long double x2(6), y2(6), r2(6);

bool arKertasi(long double x, long double y, long double r) {

	long double d, lx, ly;
	lx = pow(x, 2) - 2 * x*x2 + pow(x2, 2);
	ly = pow(y, 2) - 2 * y*y2 + pow(y2, 2);
	d = sqrt(lx + ly);
	
	if (abs(r2 - r) > d) return false;
	else if (abs(r2 - d) <= r) return true;
	else return false;

}

int main()
{
	int n, kertasi(0);
	long double x1, y1, r1;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> r1;
		r1 /= 2;
		if (arKertasi(x1, y1, r1)) kertasi++;
	}
	
	cout << kertasi;
	return 0;
}
