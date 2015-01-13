#include <iostream>
#include <limits> // Names are in Polish language, but i think the code itself is clear enough to understand what is what.
using namespace std; // I want to make this code work when user is typing letters into console.
int a;
int b;
int wybor;
int main()
{
    cout << "Podaj pierwsza liczbe." << endl;
    cin >> a;
    cin.clear();
    cin.sync();
    cout << "Podaj druga liczbe." << endl;
    cin >> b;
    cin.clear();
    cin.sync();
    cout << "Pierwsza liczba to: " << a << endl;
    cout << "Druga liczba to: " << b << endl;
    cout << "Wybierz dzialanie.\n\ 1.Dodawanie.\n\ 2.Odejmowanie.\n\ 3.Mnozenie.\n\ 4.Dzielenie." << endl;
    cin >> wybor;
        switch( wybor )
        {
            case 1:{
            int WynikDodawania = a + b;
                cout << "Wynik dodawania a + b to: " << WynikDodawania;
                break;
            }
            case 2:{
            int WynikOdejmowania = a - b;
                cout << "Wynik odejmowania a - b to: " << WynikOdejmowania;
                break;
            }
            case 3:{
            int WynikMnozenia = a * b;
                cout << "Wynik mnozenia a * b to: " << WynikMnozenia;
                break;
            }
            case 4:{

            if( b == 0 )
            {
                cout << "Nie mozna dzielic przez zero!";
            }
            else{
                int WynikDzielenia = a / b;
                cout << "Wynik dzielenia a / b to: " << WynikDzielenia;
                break;
            }
            break;
            }
        }


    return 0;
}
