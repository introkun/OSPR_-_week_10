#include <iostream>
using namespace std;

bool numberStatus(signed int a)
{
	bool result;
	return (a >= 0) ? true : false;
}

int main()
{
	signed int userEnter;
	cout << "Vvedite chislo dlia proverki na znakovost' :";
	cin >> userEnter;
	cout << "Vvedennoe chislo ";
	if (numberStatus(userEnter))
	{
		cout << "pologitel'noe" << endl;
	}
	else
	{
		cout << "Otricatel'noe" << endl;
	}
	return 0;
}