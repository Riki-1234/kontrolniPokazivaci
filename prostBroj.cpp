#include <iostream>
using namespace std;

void prostiBrojevi(int* niz, int n) {
	for (int i = 0; i < n; i++) {
		int brojac = 0;
		for (int j = 1; j <= *(niz + i); j++) {
			if (*(niz + i) % j == 0) {
				brojac++;
			}
		}
		if (brojac == 2) {
			cout << *(niz + i) << " ";
		}
	}
}

int main() {
	int n;
	cout << "Koliko elemenata niza zelite: ";
	cin >> n;

	int* niz = new int[n];
	cout << "Unesite elemente niza: ";
	for (int i = 0; i < n; i++) {
		cin >> *(niz + i);
	}
	prostiBrojevi(niz, n);
	delete[] niz;
}
