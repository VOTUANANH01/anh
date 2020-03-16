#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float A, B, C, x1, x2, lon, nho, delta;
int main()
{
	cin >> A >> B >> C;
	delta = B * B - 4 * A * C;
	if (A == 0)
	{
		if (B == 0)
		{
			if (C != 0)
				cout << "0";
			else cout << "-1";
		}
		else
		{
			cout << "1" << endl;
			cout << setprecision(5) << fixed << - C / B;
		}
	}
	else if (delta == 0)
	{
		cout << "1" << endl;
		cout << setprecision(5) << fixed << -B / (2 * A);
	}
	else if (delta < 0)
		cout << "0";
	else
	{
		cout << "2" << endl;
		x1 = (-B - sqrt(delta)) / (2 * A);
		x2 = (-B + sqrt(delta)) / (2 * A);
		if (x1 < x2)
		{
			nho = x1;
			lon = x2;
		}
		else
		{
			nho = x2;
			lon = x1;
		}
		cout << setprecision(5) << fixed << nho << endl;
		cout << setprecision(5) << fixed << lon << endl;
	}
}