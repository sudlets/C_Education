#include <iostream>
using namespace std;
#include "stack.h"

int main()
{
	try
	{
		Stack<int> one;
		for (int i = 0; i < 100; i++)
			one.push(i);
		one.printStack();
		for (int i = 0; i < 100; i++)
			one.pop();
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}
