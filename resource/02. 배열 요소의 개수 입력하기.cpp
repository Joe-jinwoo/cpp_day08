#include<iostream>
using namespace std;


int main() {
	const int num = 5;
	int test[num];

	cout << num << "명의 점수를 입력하십시오 : ";
	for (int i = 0; i < 5; i++)
		cin >> test[i];

	for (int j = 0; j < num; j++) {
		cout << j + 1 << "번째 사람의 점수는 " << test[j] << "입니다.\n";
	}

	return 0;
}