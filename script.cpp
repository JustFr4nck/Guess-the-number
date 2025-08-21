#include <iostream>
#include <cctype> // for isalpha

using namespace std;

bool onlyAlpha(string name);


//main
int main()
{

    string name;
    int n;

    while (true)
    {

        cout << "Inserisci il tuo nome" << endl;
        cin >> name;

        if(onlyAlpha(name)){
            break;
        }
    }

    cout << "Bene " << name << ",\nDigita 1 per la difficoltà facile;\nDigita 2 per la difficoltà media;\nDigita 3 per la difficoltà difficile;\nDigita 0 per chiudere il programma" << endl;
    cin >> n;

    while (true){

        switch (n)
        {
        case 1:
            
            break;
        
        case 2:
            
            break;
        
        case 3:

            break;

        case 0:
            break;
        
        default:
            cout << "ERRORE: Inserire uno dei caratteri richiesti" << endl;
        }
    }
    return 0;
}



//Metods

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