#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	//Базовый уровень, вариант 3: введите массив символов из 12 элементов. замените каждый символ-цифру на символ "!"
	setlocale(LC_ALL, "");
	char s[13];
	cout << "Введите 12 символов:\n";

	for (int i = 0; i < 12; i++)
		cin >> s[i];

	for (int i = 0; i < 12; i++)
		cout << s[i] << " ";
	cout << " - начальный массив";
	cout << endl;
	for (int i = 0; i < 12; i++)
	{
		if (isdigit(s[i])) 
			s[i] = '!';
		cout << s[i] << " ";
	}
	cout << " - исправленный массив"<<endl;
}