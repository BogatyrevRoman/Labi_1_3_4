#include<iostream>
using namespace std;
int main()
{
	float x, y, z, c, d, e, a, b, r, o;   //во втором случае поменяем float на double
	{
		a = 1000;
		b = 0.0001;
		x = (a + b) * (a + b) * (a + b);
		cout << "x=" << x << endl;
		y = (a * a * a);
		cout << "y=" << y << endl;
		z = 3 * a * b * b;
		cout << "z=" << z << endl;
		c = b * b * b;
		cout << "c=" << c << endl;
		d = 3 * a * a * b;
		cout << "d=" << d << endl;
		r = (x - y);
		cout << "r=" << r << endl;
		o = (z + c + d);
		cout << "o=" << o << endl;
		e = r / o;
		cout << "otvet: " << e << endl;
		return 0;

	}
}