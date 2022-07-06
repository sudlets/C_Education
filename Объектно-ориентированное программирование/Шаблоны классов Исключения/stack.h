template <class S>
class Stack
{
private:
	S mass[64];
	int size = 0;
public:
	Stack();
	~Stack();
	void push(S);
	void pop(void);
		void printStack(void);
	int getSize(void);
	S get(void);
};

template <class S>
Stack<S>::Stack()
{
}

template <class S>
Stack<S>::~Stack()
{
}

template <class S>
void Stack<S>::push(S znach)
{
	if (size < 63)
	{
		size++;
		mass[size] = znach;
	}
	else throw "Stack is full\n";
}

template <class S>
void Stack<S>::pop(void)
{
		if (size > -1)
		{
			mass[size] = 0;
			size--;
		}
		else throw "Stack is empty\n";
}

template <class S>
void Stack<S>::printStack(void)
{
	if (size > -1)
		for (int i = size; i > 0; i--)
			cout << mass[i] << endl;
}

template <class S>
S Stack<S>::get(void)
{
	if (size > -1)
	{
		size--;
		return mass[size + 1];
			}
}

template <class S>
int Stack<S>::getSize(void)
{
	return size;
}
