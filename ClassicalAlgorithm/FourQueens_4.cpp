#include "assist.h"
#include"Stack.h"
#include<iostream>

Stack<int> stack(11);

void callback() {

	if (stack.getSize() == 4) {
		stack.Print();
	}
	else {
		int j = 0;
		while (++j <= 4)
		{
			stack.Push(j);
			if (_judge(	stack.getElements(), stack.getSize()) == 0) {
				stack.Print();
				callback();
			}
			stack.Pop();
		}

	}
}


int main() {

	callback();

	cin.get();
	return 0;
}