#pragma once

template<typename Type>
class Stack {
public:
	Stack(int size) :top(-1), maxSize(size) {
		elements = new Type[size];
		if (elements == nullptr) {
			cout << "��ʼ��ջ�������" << endl;
			exit(1);
		}
	}
	~Stack() {
		delete[] elements;
	}
	//����ջ����Ϣ�ķ���
	bool IsEmpty();
	bool IsFull();
	//��ջ��Ԫ�صĲ���
	void MakeEmpty();
	void Push(const Type item);
	Type Pop();
	Type GetTop() const;
	//��������
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
		cout << "ջ���" << endl;
		exit(1);
	}
	elements[++top] = item;
}

template<typename Type>
Type Stack<Type>::Pop() {
	if (IsEmpty()) {
		cout << "û�п�ɾ����Ԫ��" << endl;
		exit(1);
	}
	return elements[top--];
}

template<typename Type>
Type Stack<Type>::GetTop() const {
	if (IsEmpty()) {
		cout << "û�п�ɾ����Ԫ��" << endl;
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