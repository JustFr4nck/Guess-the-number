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
    int n, diff, valMax, val, count = 0;
    char fin;

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
            while (!(cin >> diff))
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "ERRORE: devi inserire un numero" << endl;
            }

            if (onlyOneOfThis(diff))
            {
                break;
            }

            cout << "ERRORE: Inserire una delle difficoltà richieste" << endl;
            continue;
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

        cout << "Inserisci valore: ";
        cin >> val;

        while (true)
        {

            count++;

            if (val > hideNum)
            {
                cout << "Numero troppo grande" << endl;
            }
            else if (val < hideNum)
            {
                cout << "Numero troppo piccolo" << endl;
            }
            else
            {
                cout << "HAI VINTO!!!!" << "\nNumero di tentativi: " << count << endl;
                break;
            }

            cout << "Inserisci valore: ";
            cin >> val;
        }

        cout << "Digita 'a' per terminare il gioco, altrimenti qualsiasi tasto per continuare a giocare" << endl;
        cin >> fin;

        if (fin == 'a')
        {
            break;
        }
    }

    return 0;
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