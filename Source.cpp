//Tsvirko Nastya
#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
int main() {
	//Matrix1. Даны целые положительные числа M и N. Сформировать целочисленную матрицу размера M × N,
	//у которой все элементы I-й строки имеют значение 10·I(I = 1, . . ., M).
	/*const int n = 5;
	const int m = 4;
	int mas[n][m];
	for (int i = 0; i < n; i++) {//stroki
		for (int j = 0; j < m; j++) {//stolbtsi
			mas[i][j] = 10 * i;
		}
	}
	for (int i = 0; i < n; i++) {//stroki
		for (int j = 0; j < m; j++) {//stolbtsi
			cout << mas[i][j]<<' ';
		}
		cout << endl;
	}*/



	//Matrix7◦Дана матрица размера M × N и целое число K(1 ≤ K ≤ M).Вывести элементы K - й строки данной матрицы.
	/*const int n = 3;//str
	const int m = 5;//kol
	int k;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 101 - 50;
		}
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i++) {//stroki
		for (int j = 0; j < m; j++) {//stolbtsi
			cout << setw(4)<<mas[i][j] ;
		}
		cout << endl;
	}
	cout << "Enter row number: \n";
	cin >> k;
	for (int p = 0; p < m; p++) {
		cout <<mas[k][p] << ' ';
	}*/


	//Matrix9.Дана матрица размера M × N.Вывести ее элементы, расположенные
	//в строках с четными номерами(2, 4, . . .).Вывод элементов производить
	//по строкам, условный оператор не использовать.
	const int n = 6;//str
	const int m = 8;//kol
	int k;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 101 - 50;
		}
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i+=2) {//stroki
		for (int j = 0; j < m; j++) {//stolbtsi
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	return 0;
}