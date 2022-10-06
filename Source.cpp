#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	/*1
	int day;
	cin >> day;
	switch (day) {
	case 1: cout << "ponedelnik" << endl; break;
	case 2: cout << "vtornik" << endl; break;
	case 3: cout << "sreda" << endl; break;
	case 4: cout << "chetverg" << endl; break;
	case 5: cout << "pyatnica" << endl; break;
	case 6: cout << "subbota" << endl; break;
	case 7: cout << "voskresenie" << endl; break;
	default: cout << "error" << endl;
	}*/

	/*2
	int k;
	cin >> k;
	switch(k){
	case 1: cout << "плохо" << endl; break;
	case 2: cout << "неудовлетворительно" << endl; break;
	case 3: cout << "удовлетворительно" << endl; break;
	case 4: cout << "хорошо" << endl; break;
	case 5: cout << "отлично" << endl; break;
	default: cout << "ошибка" << endl;
	}*/

	/*int month;
	cin >> month;
	switch (month) {
		case 1:
		case 2:
		case 12:cout << "зима" << endl; break;
		case 3:
		case 4:
		case 5:cout << "весна" << endl; break;
		case 6:
		case 7:
		case 8:cout << "лето" << endl; break;
		case 9:
		case 10:
		case 11:cout << "осень" << endl; break;*/

		/*4
		int day;
		cin >> day;
		switch (day) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:cout << 31 << endl; break;
		case 2:cout << 28 << endl; break;
		default: cout << 30 << endl;
		}*/

		/*5
		int a,b,d;
		float c;
		cin >> a >> b >> d;
		switch (d) {
		case 1: c = a + b; break;
		case 2: c = a - b; break;
		case 3: c = a * b; break;
		case 4: c = (float)a / b; break;
		}
		cout << c;*/

		/*1
		int a, b, c;
		cin >> a >> b >> c;
		bool s = a == b && b == c && a == c;
		cout << boolalpha << s;*/

		/*2
		int a;
		cin >> a;
		bool s = a % 2 == 0 && a / 100 == 0;
		cout << boolalpha << s;*/


		/*3
		int a, b, c;
		cin >> a >> b >> c;
		bool s = a == b  || b == c  || a == c ;
		cout << boolalpha << s;*/

		/*1
		int a, b;
		cin >> a >> b;
		if (a + b == 90) {
			cout << "он прямоугольный";
		}
		else if (180 - a - b > 0) {
			cout << "он существует";
		}
		else {
			cout << "не существует";
		}*/

		/*2
		int x, y;
		cin >> x >> y;
		if (x > 0 && y > 0) {
			cout << 1;
		}
		if (x < 0 && y>0) {
			cout << 2;
		}
		if (x < 0 && y<0) {
			cout << 3;
		}
		if (x > 0 && y<0) {
			cout << 4;
		}*/

	/*int a, b, c,sum;
	cin >> a>> b>> c;
	if (a > b > c&& b < c < a) {
		 sum = a + b;
	}
	if (a < b < c && c > b > a) {
		 sum = a + c;
	}
	if (c > a > b&& a > c > b) {
		 sum = c + b;
	}
	if (a < b < c && b > c > a) {
			 sum = a + b;
		}
	if (a > b > c&& c < b < a) {
			 sum = a + c;
		}
	if (c < a < b && a < c < b) {
			 sum = c + b;
		}
	cout << sum;*/


	/*1
	int day;
	cin >> day;
	switch (day) {
	case 0: cout << "zero" << endl; break;
	case 1: cout << "one" << endl; break;
	case 2: cout << "two" << endl; break;
	case 3: cout << "three" << endl; break;
	case 4: cout << "four" << endl; break;
	case 5: cout << "five" << endl; break;
	case 6: cout << "six" << endl; break;
	case 7: cout << "seven" << endl; break;
	case 8: cout << "eight" << endl; break;
	case 9: cout << "nine" << endl; break;
	}*/
}