#include <iostream>
using namespace std;

int* maxBroj(int* niz, int n) {
	int* max = niz;
	for (int i = 1; i < n; i++) {
		if (*max < *(niz + i)) {
			*max = *(niz + i);
		}
	}
	return max;
}

int main() {
	int n;
	cout << "Koliko elemenata niza zelite: ";
	cin >> n;

	int niz[100];
	cout << "Unesite elemente niza: ";
	for (int i = 0; i < n; i++) {
		cin >> *(niz + i);
	}
	cout << "Najveci broj u nizu je: " << *maxBroj(niz, n);
}
