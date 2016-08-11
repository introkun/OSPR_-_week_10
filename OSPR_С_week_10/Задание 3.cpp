#include <iostream>
using namespace std;

void primeNumber(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			cout << "chislo " << a << " ne javliaetsia prostim." << endl;
			return;
		}
	}
	cout << "chislo " << a << " javliaetsia prostim." << endl;
}
int main()
{
	int userEnter;
	cout << "Vvedite chislo dlia proverki: ";
	cin >> userEnter;
	primeNumber(userEnter);
}