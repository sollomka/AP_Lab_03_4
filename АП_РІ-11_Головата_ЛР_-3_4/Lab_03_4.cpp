// Lab_03_4.cpp
// �������� ����쳿
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 5

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, y, R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if (x >= -R && x <= 0 && y >= 0 && y <= R && x + R >= y)
		cout << "yes" << endl;

	else
		if (x >= -sqrt(pow(R, 2) - pow(y, 2)) && x <= 0 && y >= -R && y <= 0)
		cout << "yes" << endl;
	else 
		if (x >= 0 && x <= sqrt(pow(R, 2) - pow(y, 2)) && y >= 0 && y <= R)
		cout << "yes" << endl;

	else 		cout << "no" << endl;
	system("pause");
	return 0;
}
