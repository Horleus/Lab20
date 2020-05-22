#include <iostream>
using namespace std;

const int AN = 3, AM = 3;
const int YN = 5, YM = 5;
const int CN = 4, CM = 4;

void Input(int *x, int n, int m, char *name) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Уведiть " << name << "[" << i << "][" << j << "]";
			cin >> *(x + i*n +j);
		}
	}
}

void Output(int *x, int n, int m, char *name) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		{
			cout << *(x + i*n +j) << '\t';
		}
		cout << endl;
	}
}

void PoiskMaxMin(int *x, int n, int m, int *max, int *min) {
	*max = *x;
	*min = *x;
	for (int i = 0; i < n; i++) {
		if (*max < *(x + i*n +i))
			*max = *(x + i*n +i);
		if (*min > *(x + i*n +i))
			*min = *(x + i*n +i);
	}
}

int main() {
	int A[AN][AM];
	int Y[YN][YM];
	int C[CN][CM];
	int mx,mn;
	setlocale(LC_ALL, "Ukrainian");

	Input(A[0], AN, AM, "A");
	Output(A[0], AN, AM, "A");
	PoiskMaxMin(A[0], AN, AM, &mx, &mn);
	cout << "Максимальний елемент = " << mx << endl;
	cout << "Мiнiмальний елемент = " << mn << endl;
	cout << endl;

	Input(Y[0], YN, YM, "Y");
	Output(Y[0], YN, YM, "Y");
	PoiskMaxMin(Y[0], YN, YM, &mx, &mn);
	cout << "Максимальний елемент = " << mx << endl;
	cout << "Мiнiмальний елемент = " << mn << endl;
	cout << endl;

	Input(C[0], CN, CM, "C");
	Output(C[0], CN, CM, "C");
	PoiskMaxMin(C[0], CN, CM, &mx, &mn);
	cout << "Максимальний елемент = " << mx << endl;
	cout << "Мiнiмальний елемент = " << mn << endl;
	cout << endl;


	return 0;
}
