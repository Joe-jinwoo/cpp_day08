#include<iostream>
using namespace std;


int main() {
	int test[5];

	test[0] = 20;
	test[1] = 52;
	test[2] = 22;
	test[3] = 80;
	test[4] = 65;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "��° ����� ������ " << test[i] << "�Դϴ�.\n";
	}


	return 0;
}