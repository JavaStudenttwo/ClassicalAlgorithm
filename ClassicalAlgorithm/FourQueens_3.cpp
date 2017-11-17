#include "assist.h"
#include<iostream>



void callback(int *index,int i) {

	if (i > 3){
		result(index);
	}
	else{
		int j = 0;
		while (++j <= 4)
		{
			index[i] = j;

			if (_judge(index, i) == 0) {
				callback(index,i+1);
			}
		}

	}
}


int main() {

	int index[4] = { 0,0,0,0 };
	int i = 0;
	callback(index,i);




	cin.get();
	return 0;
}