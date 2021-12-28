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
		cout << i + 1 << "번째 사람의 국어점수는 " << test[0][i] << "입니다.\n";
		cout << i + 1 << "번째 사람의 수학점수는 " << test[1][i] << "입니다.\n";
	}
	return 0;
}