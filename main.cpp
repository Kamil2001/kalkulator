#include <iostream>


using namespace std;

int main()
{
    //deklaracje zmiennych
    int _a;
    int _b;
    int _wyb;

    // komentarz testowy

    cout << " ---MENU--- \n------------\nWybierz dzialanie:\n";
    cout << "1. Dodawanie\n";
    cout << "2. Odejmowane\n";
    cout << "3. Mnozenie\n";
    cout << "4. Dzielenie\n";
    cout << "5. Modulo\n";
    cin >> _wyb;
    cout << "Podaj pierwsza liczbe: ";
    cin >> _a;
    cout << "Podaj druga liczbe: ";
    cin >> _b;

    switch(_wyb)
    {
    case 1:
        {
          cout << "Dodawanie wynosi: " << _a+_b;
          break;
        }
    case 2:
        {
            cout << "Odejmowanie wynosi: " << _a-_b;
            break;
        }
    case 3:
        {
            cout << "Mnozenie wynosi: " << _a*_b;
            break;
        }
    case 4:
        {
            cout << "Dzielenie wynosi: " << _a/_b;
            break;
        }
    case 5:
        {
            cout << "Modulo wynosi: " << _a%_b;
            break;
        }
    // tutaj bedzie case 6
    default:
        {
            cout << "Nieprawidlowy wybor!";
            break;
        }
    }



    return 0;
}
