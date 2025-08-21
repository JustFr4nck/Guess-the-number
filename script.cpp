#include <iostream>
#include <cctype> // for isalpha
#include <cstdlib>
#include <ctime>

using namespace std;

bool onlyAlpha(string name);
bool onlyOneOfThis(int diff);

// main
int main()
{

    srand(time(0));

    string name;
    int n, diff, valMax;

    while (true)
    {
        while (true)
        {

            cout << "Inserisci il tuo nome" << endl;
            cin >> name;

            if (onlyAlpha(name))
            {
                break;
            }
        }

        while (true)
        {

            cout << "Bene " << name << ",\nDigita 1 per la difficoltà facile;\nDigita 2 per la difficoltà media;\nDigita 3 per la difficoltà difficile" << endl;
            cin >> diff;

            if (onlyOneOfThis(diff))
            {
                break;
            }

            cout << "ERRORE: Inserire una delle difficoltà richieste" << endl;
        }

        if (diff == 1)
        {
            valMax = 10;
            cout << "Indovina i numeri da 0 a 10" << endl;
        }
        else if (diff == 2)
        {
            valMax = 100;
            cout << "Indovina i numeri da 0 a 100" << endl;
        }
        else
        {
            valMax = 1000;
            cout << "Indovina i numeri da 0 a 1000" << endl;
        }

        int hideNum = rand() % valMax + 1;
    }
}

// Metods

bool onlyAlpha(string name)
{

    for (char c : name)
    {
        if (!isalpha(c))
        {
            cout << "Errore: Inserire nome di solo caratteri" << endl;
            return false;
        }
    }

    return true;
}

bool onlyOneOfThis(int diff)
{

    if (diff == 1 || diff == 2 || diff == 3)
    {

        return true;
    }

    return false;
}