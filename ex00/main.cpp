#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const Animal *weird = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    weird->makeSound();
    dog->makeSound();
    cat->makeSound();
    delete weird;
    delete dog;
    delete cat;

    std::cout << "//////////////////////////////" << std::endl;

    const WrongAnimal *weirdo = new WrongAnimal();
    const WrongAnimal *cato = new WrongCat();
    const WrongCat *meow = new WrongCat();

    std::cout << cato->getType() << std::endl;
    weirdo->makeSound();
    cato->makeSound();
    meow->makeSound();
    delete weirdo;
    delete meow;
    delete cato;
}
