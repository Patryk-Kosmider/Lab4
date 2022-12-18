#include <iostream>
#include <iomanip>


using namespace std;

int main()
{

	int tab[10][10];


	for(int i = 0; i < 10; i++)
	{

		tab[i][0] = i;

	}

	for(int i = 0; i < 10; i++)
	{

		tab[i][1] = i + i;

	}

	for(int i = 0; i < 10; i++)
	{

		tab[i][2] = i * i;


	}

	for(int i = 0; i < 10; i++)
	{

		tab[i][3] = 3 + i;

	}

	for(int i = 0; i < 10; i++)
	{
		tab[i][4] = i - 4;

	}

	for(int i = 5; i < 10; i++)
	{
		for(int j = 0; j < 10; j ++)
		{
			tab[j][i] = 0;
		}
		

	}

	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			cout << setw(5) << tab[i][j] << setw(5);
		}
		cout << endl;
	}
	


	return 0;
}
