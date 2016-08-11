#include <iostream>
using namespace std;

long long factorial(int a)
{
	long long result = 1;
	for (; a > 0; a--)
	{
		result *= a;
	}
	return result;
}
int main()
{
	int userEnter;
	cout << "Vvedite chislo, dlia vichislenia faktoriala: ";
	do
	{
		if (userEnter > 25)
		{
			cout << "Vvedennoe chislo ne dolgno bit' bol'she 25." << endl
				<< "Povtorite vvod: ";
		}
		if (userEnter < 0)
		{
			cout << "Vvedennoe chislo ne dolgno bit' men'she 0." << endl
				<< "Povtorite vvod: ";
		}
	} while (userEnter > 25 || userEnter < 0);
	cout << "faktorial chisla " << userEnter << " raven " << factorial(userEnter) << endl;
}