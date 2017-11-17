#include<iostream>

using namespace std;

//判断棋子放置方式是否正确
inline bool judge(int *index ,int num) {
	
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			//判断棋子是否在同一行，或某一对角线上
			//1，横坐标不同		i与j不相等
			//2，纵坐标不同		index[i]与index[j]不相等
			//3，不在同一对角线	index[i]- index[j]的绝对值和j-i的绝对值不相等
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

//打印正确的棋子放置方式
inline void result(int *index) {
	cout << "四皇后问题的一种正确解法，横坐标从0到4的4列上，纵坐标的值依次是:";
	for (int i = 0; i < 4; i++) {
		cout << index[i];
	}
	cout << endl;
}