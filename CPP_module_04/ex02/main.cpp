#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << std::endl;
	const Animal	*cat = new Cat();
	std::cout << std::endl;
	const Animal	*dog = new Dog();
	std::cout << std::endl;

	//Animal	test;
	//const Animal	*none = new Animal();

	cat->makeSound();
	dog->makeSound();

	delete dog;
	delete cat;

	std::cout << std::endl;

	std::cout << "Check cat deep copy" << std::endl;
	std::cout << std::endl;
	Cat*	catDeep = new Cat();
	std::cout << std::endl;

	std::cout << "Cat first idea: " << catDeep->getBrain().getIdeas()[0] << std::endl;
	std::cout << "Cat first idea address: " << &(catDeep->getBrain().getIdeas()[0]) << std::endl;
	std::cout << "Cat second idea address: " << &(catDeep->getBrain().getIdeas()[1]) << std::endl;

	std::cout << std::endl;
	Cat*	catDeepCopy = new Cat(*catDeep);
	std::cout << std::endl;

	std::cout << "Cat COPY first idea: " << catDeepCopy->getBrain().getIdeas()[0] << std::endl;
	std::cout << "Cat COPY first idea address: " << &(catDeepCopy->getBrain().getIdeas()[0]) << std::endl;
	std::cout << "Cat COPY second idea address: " << &(catDeepCopy->getBrain().getIdeas()[1]) << std::endl;

	std::cout << std::endl;
	delete catDeep;
	std::cout << std::endl;
	delete catDeepCopy;
	std::cout << std::endl;

	std::cout << "Check dog deep copy" << std::endl;
	std::cout << std::endl;
	Dog*	dogDeep = new Dog();
	std::cout << std::endl;

	std::cout << "dog first idea: " << dogDeep->getBrain().getIdeas()[0] << std::endl;
	std::cout << "dog first ideas address: " << dogDeep->getBrain().getIdeas() << std::endl;
	std::cout << "dog second idea address: " << &(dogDeep->getBrain().getIdeas()[1]) << std::endl;

	std::cout << std::endl;
	Dog*	dogDeepCopy = new Dog(*dogDeep);
	std::cout << std::endl;

	std::cout << "dog COPY first idea: " << dogDeepCopy->getBrain().getIdeas()[0] << std::endl;
	std::cout << "dog first ideas address: " << dogDeepCopy->getBrain().getIdeas() << std::endl;
	std::cout << "dog second idea address: " << &(dogDeepCopy->getBrain().getIdeas()[1]) << std::endl;

	std::cout << std::endl;

	std::cout << std::endl;
	delete dogDeep;
	delete dogDeepCopy;
	return (0);
}
