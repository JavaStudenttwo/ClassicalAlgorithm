#include<iostream>

using namespace std;

bool Judge(int *index, int i) {
	for (int i = 0; i < 4; i++){
		for (int j = i + 1 ; j < 4; j++) {
			if (i==j || abs(index[i]- index[j])==j-i || index[i]== index[j]){
				return false;
			}
		}
	}
	return true;
}

void Sloution(int *index) {
	cout << "四皇后问题的一种正确解法，横坐标从0到4的4列上，纵坐标的值依次是：";
	for (int i = 0; i < 4; i++){
		cout << index[i];
	}
	cout << endl;
}


int main() {
	int index[8];
	for (index[0] = 1; index[0] <= 4 ; index[0]++){
		for (index[1] = 1; index[1] <= 4; index[1]++) {
			for (index[2] = 1; index[2] <= 4; index[2]++) {
				for (index[3] = 1; index[3] <= 4; index[3]++) {
					if (Judge(index,4)){
						Sloution(index);
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