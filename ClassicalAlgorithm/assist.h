#include<iostream>

using namespace std;

//�ж����ӷ��÷�ʽ�Ƿ���ȷ
inline bool judge(int *index ,int num) {
	
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			//�ж������Ƿ���ͬһ�У���ĳһ�Խ�����
			//1�������겻ͬ		i��j�����
			//2�������겻ͬ		index[i]��index[j]�����
			//3������ͬһ�Խ���	index[i]- index[j]�ľ���ֵ��j-i�ľ���ֵ�����
			if (index[i] == index[j] || abs(index[i] - index[j]) == j - i) {
				return false;
			}
		}
	}
	return true;
	
}

inline bool _judge(int *index, int num) {

	for (int i = 0; i < num; i++) {
		if (index[i] == index[num] || abs(index[i] - index[num]) == num - i) {
			return true;
		}
	}
	return false;

}

//��ӡ��ȷ�����ӷ��÷�ʽ
inline void result(int *index) {
	cout << "�Ļʺ������һ����ȷ�ⷨ���������0��4��4���ϣ��������ֵ������:";
	for (int i = 0; i < 4; i++) {
		cout << index[i];
	}
	cout << endl;
}