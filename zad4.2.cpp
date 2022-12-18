#include <iostream>

using namespace std;

int main()
{


    int n;
    cout << "Podaj ilosc elementow tablicy: " << endl;
    cin >> n;
    int tab[100];

    int x;

    for (int i = 0; i < n; i++)
    {
        cout << "Podaj liczbe: " << endl;
        cin >> x;
        tab[i] = x;

    }

    int nm;
    int ilosc = 0;

    int pomoc[100];

    for (int i = 0; i < n; i++)
    {
        nm = tab[i];

        for (int j = 0; j < n; j++)
        {

            if (nm == tab[j])
            {
                ilosc += 1;
                pomoc[i] = ilosc;
            }



        }
        ilosc = 0;

    }


    int start = pomoc[0];
    int miejsce = 0;
    for (int i = 0; i < n; i++)
    {
        if (pomoc[0] < pomoc[i])
        {
            start = pomoc[i];
            miejsce = i;
        }

    }

    cout << "Najwiecej powtorzen ma liczba: " << tab[miejsce] << endl;
    cout << "Ilosc powtorzen to: " << pomoc[miejsce] << endl;














}