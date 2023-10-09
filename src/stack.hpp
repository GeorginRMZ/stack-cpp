#ifndef _STACK_H_
#define _STACK_H_


#define DEFAULT_STACK_SIZE 255
#define ERROR_SIZE 64
#define STACK_FULL_ERROR "Stack is full."
#define POINTER_ERROR "Pointer below zero."
#define NULL 0

template <typename T>
class Stack {
public:
	Stack(int size) : stackSize(size), arr(new T[stackSize]), pointer(0), lastError(new char[ERROR_SIZE]) {}
	Stack() : stackSize(DEFAULT_STACK_SIZE), arr(new T[stackSize]), pointer(0), lastError(new char[ERROR_SIZE]) {}

	~Stack() {
		delete[] this->arr;
	}

	char* getLastError() {
		return this->lastError;
	}

	bool isFull() {
		return this->pointer >= stackSize;
	}

	void push(T value) {
		if (isFull())
		{
			error(STACK_FULL_ERROR);
		}
		else {
			arr[this->pointer++] = value;
		}
	}

	T pop() {
		if (0 >= pointer) {
			this->pointer = 0;
			error(POINTER_ERROR);
			return NULL;
		}
		else {
			return arr[--this->pointer];
		}
	}

	T peek()
	{
		return arr[this->pointer - 1];
	}

	int size() {
		return this->pointer;
	}

	bool isEmpty() {
		return this->pointer == 0;
	}

private:
	void error(const char* err) {
		this->lastError = const_cast<char*>(err);
	}
	T* arr;
	char* lastError;
	int pointer;
	const int stackSize;
};


#endif
