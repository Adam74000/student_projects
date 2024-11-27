#include <iostream>

using namespace std;

int main(){
	char plansza[3][3] = { {' ', ' ', ' '}, {' ',' ', ' '}, {' ', ' ', ' '} };
	int rzad,kolumna;
	char gracz = 'x';
	bool gratrwa = true;
	int ruch = 0;

	while (gratrwa) {
		cout << endl;
		for (int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				cout << planasza[i][j] << " ";
			}
			cout << endl;
		}
		cout << "Gracz" << gracz << ", podaj wiersz (0-2) i kolumnę (0-2): ";
		cin >> rzad >> kolumna;

		if (plansza[rzad][kolumna] !=' ';{
			cout << "To pole jest już zajęte! Spróbuj ponownie" << endl;

			continue;
		}

		plansza[rzad][kolumna] = gracz;
		ruchi++;

		for (int i = 0; i < 3; i++){
			if(plansza[i][0] == gracz && plansza[1][i] == gracz && plansza[i][2] == gracz)
				gratrwa = false;
				break;
			}
		}

		for (int i = 0; i < 3; i++) {
			if (plansza[0][i] == gracz && plansza[1][i] == gracz && plansza[2][i] == gracz)
				gratrwa = false;
				break;
			}
		}
		if (plansza[0][0] == gracz && plansza[1][1] == gracz && plansza[2][2] == gracz) {
			gratrwa = false;
		}
		if (plansza[0][2] == gracz && plansza[1][1] == gracz && plansza[2][0] == gracz){
			gratrwa = false;
		}
		if (ruchi == 9) {
			gratrwa = false;
		}
		if (gracz == 'x') {
			gracz = '0';
		} else {
			gracz = 'x';
		}
	}


	return 0;
}
