

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Podaj ilosc elementow tablicy: " << endl;
    cin >> n;
    vector<int> liczby(n);

    int x;

    for (int i = 0; i < n; i++)
    {
        cout << "Podaj liczbe: " << endl;
        cin >> x;
        liczby[i] = x;

    }


    int start = liczby[0];
    for (int i = 0; i < n; i++)
    {
        if(start < liczby[i])
        {
            start = liczby[i];
        }

    }

    cout << "Najwieksza liczba z podanej tablicy to: " << start << endl;
    

   


}

