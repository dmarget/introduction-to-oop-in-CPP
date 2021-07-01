#include "Pony.hpp"

void Stack()
{
	Pony Boris("Boris", 0);
}
void Heap()
{
	Pony *Bob = new Pony("Bob", 1);
	delete Bob;
}

int main()
{
	Heap();
	Stack();
}