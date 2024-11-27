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

		if (plansza
	return 0;
}
