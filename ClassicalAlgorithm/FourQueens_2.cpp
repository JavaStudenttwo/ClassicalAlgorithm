#include<iostream>
#include"assist.h"
using namespace std;

int main_2() {

	int index[4] = { 0 };
	int i = 0;
	while (i > -1) {
		index[i]++;
		while (index[i] < 6 && _judge(index, i)) {
			index[i]++;
		}

			if (index[i] <= 4) {

				if (i == 3) {
					//���Ļʺ����ȷ��������ú�����ӡ��ȷ��
					result(index);
				}
				else {
					i++;
					index[i] = 0;
				}
			}
			else {
				i--;
			}

	}

	cin.get();
	return 0;
}