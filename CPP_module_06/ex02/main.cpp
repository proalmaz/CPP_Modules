#include <iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base	*generate()
{
	srand(time(NULL));
	int result = rand() % 3;
	switch (result)
	{
		case 0: return new A();
		case 1: return new B();
		case 2: return new C();
	}
	return NULL;
}

void 	identify(Base *ptr)
{
	if (dynamic_cast<A*>(ptr))
		cout << "A" << endl;
	else if (dynamic_cast<B*>(ptr))
		cout << "B" << endl;
	else if (dynamic_cast<C*>(ptr))
		cout << "C" << endl;
	else
		std::cout << "None of inherits classes present here" << std::endl;
}

void 	identify(Base &ref)
{
	try
	{
		A a = dynamic_cast<A&>(ref);
		cout << "A" << endl;
	}
	catch (std::exception &e)
	{
		try
		{
			B b = dynamic_cast<B&>(ref);
			cout << "B" << endl;
		}
		catch (std::exception &e)
		{
			try
			{
				C c = dynamic_cast<C&>(ref);
				cout << "C" << endl;
			}
			catch (std::exception &e)
			{
				std::cout << "None of inherits classes present here" << std::endl;
			}
		}
	}
}

int		main(void)
{
	Base *test1 = generate();
	std::cout << "Identify by using pointer" << std::endl;
	identify(test1);
	std::cout << "Identify by using reference" << std::endl;
	identify(*test1);
	delete test1;
	return (0);
}