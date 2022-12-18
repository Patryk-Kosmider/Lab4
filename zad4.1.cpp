#include <iostream>

using namespace std;

int main()
{
	int tab[100];
	int n;
	int el;
	cout << "Podaj ilosc elementow: " << endl;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cout << "Podaj element: " << endl;
		cin >> el;
		tab[i] = el;

	}

	int max = tab[0];
	for (int i = 0; i < n; i++)
	{
		if(max < tab[i])
		{
			max = tab[i];
		}

	}

	cout << "Najwiekszy element tablicy to: " << max << endl;



	return 0;
}