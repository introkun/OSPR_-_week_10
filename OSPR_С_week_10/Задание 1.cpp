#include <iostream>
using namespace std;

void rectangle(int height, int width)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << (i == 0 || i == height - 1 || j == 0 || j == width - 1 ? "X" : " ");
		}
		cout << endl;
	}
}
int main()
{
	int width;
	int height;
	cout << "Vvedite shiriny priamaygol'nika: ";
	do
	{
		cin >> width;
		if (width > 75)
		{
			cout << "Ne korektnij vvod, shirina ne dolgna bit' bol'she 75!" << endl
				<< "Povtorite vvod: ";
		}
		if (width < 2)
		{
			cout << "Ne korektnij vvod, shirina ne dolgna bit' men'she 2!" << endl
				<< "Povtorite vvod: ";
		}
	} while (width < 2 || width > 75);
	cout << "Vvedite visoty priamoygol'nika: ";
	do
	{
		cin >> height;
		if (height < 2)
		{
			cout << "Ne korektnij vvod, visota ne dolgna bit' men'she 2!" << endl
				<< "Povtorite vvod: ";
		}
		if (height > 25)
		{
			cout << "Ne korektnij vvod, visota ne dolgna bit' bol'she 25!" << endl
				<< "Povtorite vvod: ";
		}
	} while (height < 2 || height > 25);
	rectangle(height, width);
	return 0;
}