#include "pch.h"
#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char x;
	cout << "Введіть  путктуаційний знак: ";
	cin >> x;
	switch (x)
	{
	case'-':cout << "(-)-це тире\n"; break;
	case'.':cout << "(.)-це крапка\n"; break;
	case':':cout << "(:)-це двокрапка\n"; break;
	case';':cout << "(;)-це крапка з комою\n"; break;
	case'...':cout << "(...)-це три крапки\n"; break;
	case',':cout << "(,)-це кома\n"; break;
	case'?':cout << "(?)-це знак питання\n"; break;
	case'!':cout << "(!)-це знак оклику\n"; break;
	default:cout << "такого розділового знаку не існує\n"; break;
	}
	system("pause");
	return 0;
}