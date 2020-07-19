#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
bool TestTriangle(double a, double b, double c)
{
	return a + b > c and b + c > a and a + c > b;
}
double Ploscha_trikutnuka(double a0, double b0, double c0)
{
	double perimetr = (a0 + b0 + c0);
	double polyperimetr = perimetr / 2;
	double s = sqrt(polyperimetr * (polyperimetr - a0) * (polyperimetr - b0) * (polyperimetr - c0));
	return s;
}
int main()
{
	double pl_tr1 = 0;
	double a1 = 3;
	double b1 = 4;
	double c1 = 5;
	if (TestTriangle(a1, b1, c1))
	{
		pl_tr1 = Ploscha_trikutnuka(a1, b1, c1);
		cout << "pl_tr1 = " << pl_tr1 << endl;
	}
	else
	{
		cout << "Treugolnika ne suschestvyet!" << endl;
	}
	double pl_tr2 = 0;
	double a2 = 3;
	double b2 = 4;
	double c2 = 5;
	if (TestTriangle(a1, b1, c1))
	{
		pl_tr2 = Ploscha_trikutnuka(a2, b2, c2);
		cout << "pl_tr2 = " << pl_tr2 << endl;
	}
	else
	{
		cout << "Treugolnika ne suschestvyet!" << endl;
	}
	double pl_tr3 = 0;
	double a3 = 3;
	double b3 = 4;
	double c3 = 5;
	if (TestTriangle(a1, b1, c1))
	{
		pl_tr3 = Ploscha_trikutnuka(a3, b3, c3);
		cout << "pl_tr2 = " << pl_tr2 << endl;
	}
	else
	{
		cout << "Treugolnika ne suschestvyet!" << endl;
	}
	double sum = pl_tr1 + pl_tr2 + pl_tr3;
	cout << "pl_tr1+pl_tr2+pl_tr3 = " << sum << endl;
}

/*#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
bool TestTriangle(double a, double b, double c)
{
	return a + b > c and b + c > a and a + c > b;
}
double Ploscha_trikutnuka(double a0, double b0, double c0)
{
	double perimetr = (a0 + b0 + c0);
	double polyperimetr = perimetr / 2;
	double s = sqrt(polyperimetr * (polyperimetr - a0) * (polyperimetr - b0) * (polyperimetr - c0));
	return s;
}
int main()
{
	double pl_tr1 = 0;
	double a1 = 3;
	double b1 = 4;
	double c1 = 5;
	if (TestTriangle(a1, b1, c1))
	{
		pl_tr1 = Ploscha_trikutnuka(a1, b1, c1);
		cout << "pl_tr1 = " << pl_tr1 << endl;
	}
	else
	{
		cout << "Treugolnika ne suschestvyet!" << endl;
	}
	double pl_tr2 = 0;
	double a2 = 3;
	double b2 = 4;
	double c2 = 5;
	if (TestTriangle(a1, b1, c1))
	{
		pl_tr2 = Ploscha_trikutnuka(a2, b2, c2);
		cout << "pl_tr2 = " << pl_tr2 << endl;
	}
	else
	{
		cout << "Treugolnika ne suschestvyet!" << endl;
	}
	double pl_tr3 = 0;
	double a3 = 3;
	double b3 = 4;
	double c3 = 5;
	if (TestTriangle(a1, b1, c1))
	{
		pl_tr3 = Ploscha_trikutnuka(a3, b3, c3);
		cout << "pl_tr2 = " << pl_tr2 << endl;
	}
	else
	{
		cout << "Treugolnika ne suschestvyet!" << endl;
	}
	double sum = pl_tr1 + pl_tr2 + pl_tr3;
	cout << "pl_tr1+pl_tr2+pl_tr3 = " << sum << endl;
}*/

/*#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
double Ploscha(double r)
{
	double pi = 3.14;
	double pl = pi * pow(r, 2);
	return pl;
}
double Lenghts(double r)
{
	double pi = 3.14;
	double l = pi * (r * 2);
	return l;
}
int main()
{
	double r = 1;
	double pl = Ploscha(r);
	cout << "ploscha = " << pl << endl;
	double l = Lenghts(r);
	cout << "dovzhyna = " << l << endl;
}*/

/*#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
inline double Suma(double a, double b)
{
	return a + b;
}
int main()
{
	double x = 10, y = 20;
	double R = Suma(x, y) + Suma(5, 3);
	cout << R;
}*/

/*#include <iostream> //вывод суммы
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
double Suma(double a, double b)
{
	double c;
	c = a + b;
	return c;
}
int main()
{
	double x = 10, y = 20;
	double R = Suma(x, y);
	cout << R;
}*/

/*#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
void ShowRow(int c = 10, char ch = ' ')
{
	for (int i = 0; i < c; i++)
		cout << ch;
}
int main()
{
	SetConsoleOutputCP(1251);
	int h = 5;
	int w = 10;
	cout << "Введите w (длину прямоугольника): " << endl;
	cin >> w;
	cout << "Введите h (высоту прямоугольника): " << endl;
	cin >> h;
	char s = '=';
	ShowRow(w, s);
	cout << endl;
	for (int j = 0; j < h - 2; j++)
	{
		cout << s;
		ShowRow(w - 2);
		cout << s << endl;
	}
	ShowRow(w, s);
	ShowRow();
	cout << '|';
}*/

/*#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
void ShowRow(int c = 10, char ch = ' ')
{
	for (int i = 0; i < c; i++)
		cout << ch;
}
int main()
{
	SetConsoleOutputCP(1251);
	int h = 5;
	int w = 10;
	cout << "Введите w (длину прямоугольника): " << endl;
	cin >> w;
	cout << "Введите h (высоту прямоугольника): " << endl;
	cin >> h;
	char s = '=';
	ShowRow(w, s);
	cout << endl;
	for (int j = 0; j < h - 2; j++)
	{
		cout << s;
		ShowRow(w - 2);
		cout << s << endl;
	}
	ShowRow(w, s);
	ShowRow();
	cout << '|';
}*/

/*#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
void ShowRow(int c = 10, char ch = ' ')
{
	for (int i = 0; i < c; i++)
		cout << ch;
}
int main()
{
	SetConsoleOutputCP(1251);
	int h = 5;
	int w = 10;
	cout << "Введите w (длину прямоугольника): " << endl;
	cin >> w;
	cout << "Введите h (высоту прямоугольника): " << endl;
	cin >> h;
	char s = '=';
	ShowRow(w, s);
	cout << endl;
	for (int j = 0; j < h - 2; j++)
	{
		cout << s;
		ShowRow(w - 2);
		cout << s << endl;
	}
	ShowRow(w, s);
	ShowRow();
	cout << '|';
}*/

/*#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
void ShowRow(int, char);
void ShowRow(int c)
{
	ShowRow(c, ' ');
}
void ShowRow(int c, char ch)
{
	for (int i = 0; i < c; i++)
		cout << ch;
}
int main()
{
	SetConsoleOutputCP(1251);
	int h = 5;
	int w = 10;
	cout << "Введите w (длину прямоугольника): " << endl;
	cin >> w;
	cout << "Введите h (высоту прямоугольника): " << endl;
	cin >> h;
	char s = '=';
	ShowRow(w, s);
	cout << endl;
	for (int j = 0; j < h - 2; j++)
	{
		cout << s;
		ShowRow(w - 2);
		cout << s << endl;
	}
	ShowRow(w, s);
}*/

/*#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>
using namespace std;
void ShowRow(int c, char ch)
{
	for (int i = 0; i < c; i++)
		cout << ch;
}
void ShowRow(int c)
{
	ShowRow(c, ' ');
}
int main()
{
	SetConsoleOutputCP(1251);
	int h = 5;
	int w = 10;
	cout << "Введите w (длину прямоугольника): " << endl;
	cin >> w;
	cout << "Введите h (высоту прямоугольника): " << endl;
	cin >> h;
	char s = '=';
	ShowRow(w, s);
	cout << endl;
	for (int j = 0; j < h - 2; j++)
	{
		cout << s;
		ShowRow(w - 2);
		cout << s << endl;
	}
	ShowRow(w, s);
}*/

/*SetConsoleOutputCP(1251);
	int h = 0;
	int w = 0;
	cout << "Введите w (длину прямоугольника): " << endl;
	cin >> w;
	cout << "Введите h (высоту прямоугольника): " << endl;
	cin >> h;
	for (int i = 0; i < w; i++) // вывод прямоугольника из звездочек
		cout << "*";
	cout << endl;
	for (int j = 0; j < h - 2; j++)
	{
		cout << "*";
		for (int i = 0; i < w - 2; i++)
			cout << " ";
		cout << "*\n";
	}
	for (int i = 0; i < w; i++)
		cout << "*";
	return 0;*/

	/*SetConsoleOutputCP(1251);
		const int sizer = 100, sizec = 100;
		int r, c;
		int arr[sizer][sizec]{ 0 };
		int a = -10;
		int b = 10;
		cout << "Введите количество рядов(r): ";
		cin >> r;
		cout << "Введите количество столбцов(c): ";
		cin >> c;
		cout << endl;
		if (r<1 or r>sizer) return 0;
		if (c<1 or c>sizer) return 0;
		srand(time(0));
		for (int j = 0; j < r; j++) // генерация случайных чисел
			for (int i = 0; i < c; i++)
				arr[j][i] = a + rand() % (b - a + 1);





		for (int j = 0; j < r; j++) // вывод масива на экран
		{
			for (int i = 0; i < c; i++)
				cout << arr[j][i] << '\t';
			cout << endl;
		}*/