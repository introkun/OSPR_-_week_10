#include <iostream>
using namespace std;

int maxNumber(int a, int b)
{
	return (a > b) ? a : b;
}
int main()
{
	int number1;
	int number2;
	cout << "Vvedite pervoe chisla dlia sravnenija: ";
	cin >> number1;
	cout << "Vvedite vtoroe chislo dlia sravnenija :";
	cin >> number2;
	cout << "Bol'shim javliaetsia chislo " << maxNumber(number1, number2) << endl;
	return 0;
}