#include<iostream>
#include"assist.h"
#define log4c cout << "i = "<< i << "	 index[" << i << "] =" << index[i] << endl; 
using namespace std;

int main_2test() {

	int index[4] = { 0 };
	int i = 0;
	while (i > -1) {
		log4c
		index[i]++;
		while (index[i] < 6 && _judge(index,i)) {
			index[i]++;
			cout << "�ڶ���whileѭ�� index[i] =" << index[i] << "   i = " << i << endl;
		}
		log4c

		if (index[i] <= 4) {

			if (i == 3) {
				cout << "����1" << endl;
				result(index);
			}
			else {
				cout << "����2" << endl;
				i++;
				index[i] = 0;
			}

		}
		else {
			cout << "����3" << endl;
			i--;
		}
		
	}

	cin.get();
	return 0;
}