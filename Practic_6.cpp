#include <iostream>
#include <Windows.h>
#include <climits>

using namespace std;

void numbers(int& c, int& coe);
char input_char();

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int c, coe;
	numbers(c, coe);
	cout << c << " - Кількість \n";
	cout << coe << " - Кількість непарних у парній позиції";

}


char input_char() {
	short a;
	do {
		cout << "Введіть число-> ";
		cin >> a;
		if (a > CHAR_MAX || a < CHAR_MIN) cout << "Помилка через вихід з ОДЗ\n";
	} while (a > CHAR_MAX || a < CHAR_MIN);
		cout << "a = " << a << endl;
		return (a);
	
	

}
void numbers(int& c, int& coe) {
	char a;
	a = input_char();
	const char end = 0;
	int position = 1;
	 coe = 0;
	  c = 0;
	 while (a != end) {
		 c++;
		 if (position % 2 == 0 && a % 2 != 0) { 
			 coe += 1; 
		 }
		 
		 position++;
		
		 a = input_char();
	 }
	  return;
}

