#include<iostream>
using namespace std;


int main() {
	const int num = 5;
	int test[num];

	cout << num << "���� ������ �Է��Ͻʽÿ� : ";
	for (int i = 0; i < 5; i++)
		cin >> test[i];

	for (int j = 0; j < num; j++) {
		cout << j + 1 << "��° ����� ������ " << test[j] << "�Դϴ�.\n";
	}

	return 0;
}