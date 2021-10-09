#include <iostream>

struct Data
{
	float	f1;
	float 	f2;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int		main(void)
{
	Data*	example = new Data();

	example->f1 = 389.13f;
	example->f2 = 214.123f;

	std::cout << "Before convertion" << std::endl;
	std::cout << example->f1 << std::endl;
	std::cout << example->f2 << std::endl;

	std::cout << example << std::endl;
	uintptr_t	p 			= serialize(example);
	std::cout << p << std::endl;
	Data*		converted	= deserialize(p);

	std::cout << converted << std::endl;
	std::cout << "After convertion" << std::endl;
	std::cout << converted->f1 << std::endl;
	std::cout << converted->f2 << std::endl;

	delete example;
	return (0);
}