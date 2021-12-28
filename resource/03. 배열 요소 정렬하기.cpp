#include<iostream>
using namespace std;


int main() {
	int test[5];
	int i, tmp;

	for (i = 0; i < 5; i++)
		cin >> test[i];

	for (i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (test[i] < test[j]) {
				tmp = test[i];
				test[i] = test[j];
				test[j] = tmp;
			}
		}
	}

	for (i = 0; i < 5; i++)
		cout << i + 1 << "번째 사람의 점수는 " << test[i] << "입니다.\n";

	return 0;
}