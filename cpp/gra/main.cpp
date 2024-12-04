Udostępnij


Powiedziałeś(-aś):
#include <iostream>
using namespace std;

int main() {
    // Tworzymy planszę 3x3
    char plansza[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int rzad, kolumna;
    char gracz = 'X';
    bool graTrwa = true;
    int ruchi = 0;  // Zmienna do liczenia ruchów

    // Pętla gry
    while (graTrwa) {
        // Rysowanie planszy
        cout << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << plansza[i][j] << " ";
            }
            cout << endl;
        }

        // Pobieranie ruchu od gracza
        cout << "Gracz " << gracz << ", podaj wiersz (0-2) i kolumnę (0-2): ";
        cin >> rzad >> kolumna;

        // Sprawdzanie, czy dane pole jest puste
        if (plansza[rzad][kolumna] != ' ') {
            cout << "To pole jest już zajęte! Spróbuj ponownie." << endl;
            continue;
        }

        // Zapisanie ruchu gracza
        plansza[rzad][kolumna] = gracz;
        ruchi++;

        // Sprawdzanie wygranej
        // Sprawdzanie wierszy
        for (int i = 0; i < 3; i++) {
            if (plansza[i][0] == gracz && plansza[i][1] == gracz && plansza[i][2] == gracz) {
                graTrwa = false;
                break;
            }
        }

        // Sprawdzanie kolumn
        for (int i = 0; i < 3; i++) {
            if (plansza[0][i] == gracz && plansza[1][i] == gracz && plansza[2][i] == gracz) {
                graTrwa = false;
                break;
            }
        }

        // Sprawdzanie przekątnych
        if (plansza[0][0] == gracz && plansza[1][1] == gracz && plansza[2][2] == gracz) {
            graTrwa = false;
        }
        if (plansza[0][2] == gracz && plansza[1][1] == gracz && plansza[2][0] == gracz) {
            graTrwa = false;
        }

        // Sprawdzanie remisu
        if (ruchi == 9) {
            graTrwa = false;
        }

        // Zmiana gracza
        if (gracz == 'X') {
            gracz = 'O';
        } else {
            gracz = 'X';
        }
    }

    // Pokazywanie wyniku gry
    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << plansza[i][j] << " ";
        }
        cout << endl;
    }

    if (ruchi == 9) {
        cout << "Remis! Gra zakończona." << endl;
    } else {
        cout << "Gratulacje! Gracz " << (gracz == 'X' ? 'O' : 'X') << " wygrał!" << endl;
    }

    return 0;
}
