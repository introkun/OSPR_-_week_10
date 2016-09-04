#include <iostream>
using namespace std;

Bool primeNumber(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return False;
		}
	}
	return True;
}
int main()
{
	int userEnter;
	cout << "Vvedite chislo dlia proverki: ";
	cin >> userEnter;
	if (primeNumber(userEnter))
	{
		cout << "chislo " << a << " javliaetsia prostim." << endl;
	}
	else
	{
		cout << "chislo " << a << " ne javliaetsia prostim." << endl;
	}
	

}
