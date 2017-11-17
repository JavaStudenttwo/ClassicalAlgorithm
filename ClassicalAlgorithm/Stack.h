#pragma once

template<typename Type>
class Stack {
public:
	Stack(int size) :top(-1), maxSize(size) {
		elements = new Type[size];
		if (elements == nullptr) {
			cout << "初始化栈对象出错" << endl;
			exit(1);
		}
	}
	~Stack() {
		delete[] elements;
	}
	//返回栈的信息的方法
	bool IsEmpty();
	bool IsFull();
	//对栈内元素的操作
	void MakeEmpty();
	void Push(const Type item);
	Type Pop();
	Type GetTop() const;
	//基本方法
	void Print();
	Type * getElements() {
		return elements;
	}
	int getSize() {
		return top;
	}

private:
	int top;
	int maxSize;
	Type * elements;
};

template<typename Type>
void Stack<Type>::MakeEmpty() {
	this->top = -1;
}

template<typename Type>
bool Stack<Type>::IsEmpty() {
	return top == -1;
}

template<typename Type>
bool Stack<Type>::IsFull() {
	return top == maxSize - 1;
}

template<typename Type>
void Stack<Type>::Push(const Type item) {
	if (IsFull()) {
		cout << "栈溢出" << endl;
		exit(1);
	}
	elements[++top] = item;
}

template<typename Type>
Type Stack<Type>::Pop() {
	if (IsEmpty()) {
		cout << "没有可删除的元素" << endl;
		exit(1);
	}
	return elements[top--];
}

template<typename Type>
Type Stack<Type>::GetTop() const {
	if (IsEmpty()) {
		cout << "没有可删除的元素" << endl;
		exit(1);
	}
	return elements[top];
}

template<typename Type>
void Stack<Type>::Print() {
	cout << endl << "bottom";
	for (int i = 0; i <= top; i++) {
		cout << "->" << elements[i];
	}
	cout << "->top" << endl;
}