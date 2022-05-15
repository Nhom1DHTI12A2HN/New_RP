#include <iostream>
#include <math.h>

using namespace std;

int max(int x, int y) {
	if (x > y) return x;
	else return y;
}

int main()
{
	int a, b, c, d, gt_max;
	cout << "\ta = "; cin >> a;
	cout << "\nb = "; cin >> b;
	cout << "\nc = "; cin >> c;
	cout << "\nd = "; cin >> d;

	gt_max = max(max(max(a, b), c), d);
	cout << "\n\tMax = " << max << endl;
	return 0;
}