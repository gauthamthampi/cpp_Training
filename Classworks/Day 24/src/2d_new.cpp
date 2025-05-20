#include <iostream>
using namespace std;

int main() {
	int rows = 3, cols = 4;
	int** arr = (int**)calloc(rows, sizeof(int));
	for (int i = 0;i < rows;i++) {
		arr[i] = (int*)calloc(cols, sizeof(int));
	}
	for (int i = 0;i < rows;i++) {
		for (int j = 0;j < cols;j++) {
			arr[i][j] = (i * cols) + j+1;
		}
	}
	for (int i = 0;i < rows;i++) {
		cout << endl;
		for (int j = 0;j < cols;j++) {
			cout << arr[i][j] << " ";
		}
	}
	return 0;
}