#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <string>

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


    int i = 0;
    cout << "Niech uzytkownik 1 poda swoje imie: ";
    cin >> imie1;
    cout << "Niech uzytkownik 2 poda swoje imie: ";
    cin >> imie2;
    const char* tab1 = imie1.c_str();
    const char* tab2 = imie2.c_str();
    int p1;
    int p2;
    char l1;
    char l2;
    i = 0;
    while (tab1[i] != '\0') {
        l1 = tab1[i];
        i++;
    }
    if (l1 == 'a') {
        p1 = 1;
    } else {
        p1 = 0;
    }
    i = 0;
    while (tab2[i] != '\0') {
        l2 = tab2[i];
        i++;
    }
    if (l2 == 'a') {
        p2 = 1;
    } else {
        p2 = 0;
    }



    cout << "Witajcie " << imie1 <<  " i " << imie2 << endl;
    int liczba_rozgrywek;
    cout << "podajcie liczbe rozgrywek: ";
    cin >> liczba_rozgrywek;

    int wskazanie = 1;

    int kolej = 1;
    cout << "Nacisnij przycisk spacja do rozpoczecia gry...";
    while (_kbhit() == 0) {}
    system("cls");


    for (int i = 0; i < liczba_rozgrywek; i++) {
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                tab[x][y] = 'p';
            }
        }





        while (1) {
            system("cls");
            cout << "ROZGRYWKA NR: " << i+1 << endl;
            wskazanie = 1;
            for (int y = 0; y < 3; y++) {
                for (int x = 0; x < 3; x++) {
                    cout << tab[x][y] << " ";
                }
                cout << endl;
            }
            if (kolej % 2 == 1) {
                if (p1 == 1) {
                    cout << "UZYTKOWNICZKA ";
                } else {
                    cout << "UZYTKOWNIK ";
                }
                cout << imie1;
            } else {
                if (p2 == 1) {
                    cout << "UZYTKOWNICZKA ";
                } else {
                    cout << "UZYTKOWNIK ";
                }
                cout << imie2;
            }
            cout << " PODAJE POZYCJE:" << endl;
            int x1;
            int y1;
            cout << "x: ";
            cin >> x1;
            cout << "y: ";
            cin >> y1;
            if (kolej % 2 == 1 && tab[x1-1][y1-1] == 'p') {
                tab[x1-1][y1-1] = 'O';
            } else if (tab[x1-1][y1-1] == 'p') {
                tab[x1-1][y1-1] = 'X';
            }



            int wygrana = 0;

            for (int f = 0; f < 2; f++) {

                char znak;
                if (f == 0) {
                    znak = 'O';
                } else {
                    znak = 'X';
                }


                for (int y = 0; y < 3; y++) {
                    int wskaznik = 0;
                    for (int x = 0; x < 3; x++) {
                        if (tab[x][y] == znak) {
                            wskaznik++;
                        }
                    }

                    if (wskaznik == 3) {
                        wygrana  = 1;
                    }

                }


                for (int x = 0; x < 3; x++) {
                        int wskaznik = 0;
                    for (int y = 0; y < 3; y++) {
                        if (tab[x][y] == znak) {
                            wskaznik++;
                        }

                    if (wskaznik == 3) {
                        wygrana = 1;
                    }
                }
            }


            if (tab[1][1] == znak && tab[2][2] == znak && tab[3][3] == 0 || tab[3][1] == znak && tab[2][2] == znak && tab[1][3] == znak) {
                wygrana = 1;
            }













            }

            kolej++;
        }


















    }











}
