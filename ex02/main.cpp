#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NUMBER_OF_ANIMALS 8
int    main( void )
{
    Animal    *animals[NUMBER_OF_ANIMALS];
    Brain    *brain;
    //Uncomment the test to check that the Animal class is absract
    //Animal test;

    for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
    {
        if (i < NUMBER_OF_ANIMALS / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        std::cout << animals[i]->getType() << std::endl;
    }
    brain = animals[7]->getBrain();
    brain->ideas[0] = "My brain hurts atm";
    brain->ideas[1] = "I am really tired rn";
    brain->ideas[2] = "Haiii";
    brain->ideas[3] = "Helooooow";
    std::cout << animals[7]->getBrain()->ideas[0] << std::endl;

    animals[3]->makeSound();
    animals[5]->makeSound();
    std::cout << "Type of animal 2: " << animals[2]->getType() << std::endl;

    *(animals[5]) = *(animals[7]);
    std::cout << animals[5]->getBrain()->ideas[2] << std::endl;
    for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
        delete animals[i];
}
