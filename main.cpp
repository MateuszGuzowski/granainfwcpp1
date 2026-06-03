#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;
main() {
    cout << "GRA KOLKO I KRZYZYK" << endl;
    cout << "AUTOR: MATEUSZ GUZOWSKI 1d" << endl;
    cout << "OPIS I INSTRUKCJE DOTYCZACE GRY:" << endl;
    cout << "GRA TA JEST PRZEZNACZONA DLA DWOCH OSOB. ZAWSZE GRE ROZPOCZYNA UZYTKOWNIK 1.\nSPRAWY Z TYM ZWIAZANE USTALAJA UZYTKOWNICY. Litera 'p' w tablicy oznacza, ze pole jest puste." << endl;
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;

    char tab [3][3];
    string imie1;
    string imie2;
    cout << "Niech uzytkownik 1 poda swoje imie: ";
    cin >> imie1;
    cout << "Niech uzytkownik 2 poda swoje imie: ";
    cin >> imie2;
    cout << "Witajcie " << imie1 <<  " i " << imie2 << endl;
    int liczba_rozgrywek;
    cout << "podajcie liczbe rozgrywek: ";
    cin >> liczba_rozgrywek;
    int p1 = 0;
    int p2 = 0;
    int kolej = 1;
    cout << "Nacisnij przycisk spacja do rozpoczecia gry...";
    while (_kbhit() == 0) {}
    system("cls");



    for (int i = 0; i < liczba_rozgrywek; i++) {











    }











}
