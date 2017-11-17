#include<iostream>
#include"assist.h"

using namespace std;

int main_1() {
	int index[4];
	//多层循环，穷举每一种放置方式
	for (index[0] = 1; index[0] <= 4 ; index[0]++){
		for (index[1] = 1; index[1] <= 4; index[1]++) {
			for (index[2] = 1; index[2] <= 4; index[2]++) {
				for (index[3] = 1; index[3] <= 4; index[3]++) {
					//判断棋子放置是否合乎规则，正确则打印，不正确则继续
					if (judge(index,4)){
						result(index);
					}
					else {
						continue;
					}
				}
			}
		}
	}

	cin.get();
	return 0;
 }