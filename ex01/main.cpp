#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void    testCreation( void )
{
    const Animal* j[10];
    int i;

    i = -1;
    while (i++ < 9)
    {
        if (i % 2)
            j[i] = new Cat();
        else
            j[i] = new Dog();
        j[i]->makeSound();
    }
    i = -1;
    while (i++ < 9)
    {
        delete j[i];
    }
    
    system ("leaks brain");
}

void    testCopy( void )
{
    Dog jack;
    Dog second;

    jack.makeSound();
    jack.addIdea("Eat bone");
    jack.addIdea("Eat homework");
    jack.addIdea("Eat carpet");
    jack.getIdeas();
    second = jack;
    jack.addIdea("Eat shit");
    second.addIdea("Dont eat shit");
    jack.getIdeas();
    second.getIdeas();
}

int main()
{
    testCreation();
    return 1;
    
}