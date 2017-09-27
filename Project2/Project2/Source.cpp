/* Jarrett Reed - 4th
Assignment Name : Display Text
Introduction to C++ Visual Studios
Printing out statements to Console from Code*/

// Libraries
#include <iostream> // cout, cin, endl, <<, >> 
#include <conio.h> // pause() fun access to _getch() and _kbhit()
// Namespaces
using namespace std;

// Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	char H = 'H';
	char e = 'e';
	char l = 'l';
	char o = 'o';
	char W = 'W';
	char r = 'r';
	char d = 'd';
	char noel = 'l';
	// Display Text "Hello World"
	cout << "He" << noel << noel << "o Wor" << noel << "d!" << endl;
	cout << H << e << l << l << o << " " << W << o << r << l << d << "!" << endl;
	//pause();// pause() so we can see the text
	
	char J = 'J';
	char a = 'a';
	char t = '1';
	int pNum = '4';
	char pSymbol = '4';


	cout << "Jarrett" << pSymbol << "4" << endl;
	cout << J << a << r << r << e << t << t << 4 << endl;
	pause(); 
	return;

}