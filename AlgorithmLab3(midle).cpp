#include <cctype>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	//Средний уровень, 3 вариант: дан массив символов содержащий текст. Определить длину содержащийся в нем максимальной серии символов отличных от букв
	setlocale(LC_ALL, "");
	int maxlen = 0;
	int curlen = 0;
	const int N = 15;
	char ch;
	for (int i = 0; i < N;i++) 
	{
		cin >> ch;
		if (isalpha(ch) == 0)
			curlen = curlen + 1;
		maxlen = max(curlen, maxlen);
	}
	cout <<"Максимальная серия: "<< maxlen << endl;
	return 0;
}