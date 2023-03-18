#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Unesite tri broja: ";
	cin >> a >> b >> c;

	int min;
	int *a_ptr = &a, *b_ptr = &b, *c_ptr = &c;
	if (*a_ptr < *b_ptr && *a_ptr < *c_ptr) {
		min = *a_ptr;
	}
	if (*b_ptr < *a_ptr && *b_ptr < *c_ptr) {
		min = *b_ptr;
	}
	if (*c_ptr < *b_ptr && *c_ptr < *a_ptr) {
		min = *c_ptr;
	}
	cout << "Najmanji broj je: " << min;
}
