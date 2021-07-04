#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	int n = 9;
	double x = 4.2;
	int ans;

	ans = scalbn(x, n);
	cout << x << " * " << FLT_RADIX << "^" << n << " = " << ans << endl;

	_getch();
	return 0;
}
