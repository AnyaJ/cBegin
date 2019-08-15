#include "begin.h"

void begin12()
{
	cout << "vvedite katety treugolnika: ";
	double a, b;
	cin >> a >> b;
	double c = sqrt(a * a + b * b);
	cout << "gipotenuza = " << c << endl;
	cout << "perimetr = " << a + b + c;
}