#include<iostream>
using namespace std;


int main() {
	int test[2][5];
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++)
			cin >> test[i][j];
	}

	for (i = 0; i < 5; i++) {
		cout << i + 1 << "��° ����� ���������� " << test[0][i] << "�Դϴ�.\n";
		cout << i + 1 << "��° ����� ���������� " << test[1][i] << "�Դϴ�.\n";
	}
	return 0;
}