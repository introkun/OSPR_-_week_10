#include <iostream>
using namespace std;

signed long long kube(long long a)
{
	signed long long result = 1;
	for (int i = 0; i < 3; i++)
	{
		result *= a;
	}
	return result;
}
int main()
{
	int userEnter;
	cout << "Vvedite chislo dlia vozvedenia v kyb: ";
	do
	{
		cin >> userEnter;
		if (userEnter > 199869962)
		{
			cout << "Chislo ne dolgno bit bol'she 199869962" << endl
				<< "Povtorite vvod: ";
		}
		if (userEnter < -199869962)
		{
			cout << "Chislo ne dolgno bit men'she -199869962" << endl
				<< "Povtorite vvod: ";
		}
	} while (userEnter > 199869962 || userEnter < -199869962);
	cout << "kyb chisla " << userEnter << " raven " << kube(userEnter) << endl;
	return 0;
}