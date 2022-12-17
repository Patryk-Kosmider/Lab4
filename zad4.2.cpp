

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

    int liczba;
    int ilosc = 0;

    vector<int> pomoc(n);

    for(int i = 0; i < n; i++)
    {
    	liczba = liczby[i];

        for (int j = 0; j < n; j++)
        {

	        if(liczba == liczby[j])
	        {
                ilosc  += 1;
                pomoc[i] = ilosc;
	        }
          
            

        }
        ilosc = 0;

    }


    int start = pomoc[0];
    int miejsce = 0;
    for(int i = 0; i < n; i++)
    {
        if(pomoc[0] < pomoc[i])
        {
            start = pomoc[i];
            miejsce = i;
        }

    }

    cout << "Najwiecej powtorzen ma liczba: " << liczby[miejsce] << endl;
    cout << "Ilosc powtorzen to: " << pomoc[miejsce] << endl;
    





   

    
    

   


}

