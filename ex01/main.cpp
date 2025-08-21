#include "Animal.hpp"
#include "Brain.hpp"

void    test_polymorphisme(void)
{
   Animal*   Animaux[10];

   std::cout << "-------test Polymorphisme-------" << std::endl;
   for(int i(0); i < 10; i++)
   {
        if (i % 2 == 0)
            Animaux[i] = new Dog();
        else
            Animaux[i] = new Cat();
   }
   for(int i(0); i < 10; i++)
        Animaux[i]->makeSound();
    for(int i(0); i < 10; i++)
        delete Animaux[i];
}

void    test_copy_constructor()
{
    std::cout << "-------test copy constructor--------" << std::endl;

    Cat cat1;
    cat1.getbrain()->setbrain(0, "Eat");
    std::cout << "cat1 type: " << cat1.getType() << std::endl;

    Cat cat2;
    std::cout << "cat1 ideas[0] : " << cat1.getbrain()->getidea(0) << std::endl;
    std::cout << "cat2 ideas[0] : " << cat2.getbrain()->getidea(0) << std::endl;
    std::cout << "cat2 type: " << cat2.getType() << std::endl;

    cat2 = cat1;
    std::cout << "cat1 ideas[0] after: " << cat1.getbrain()->getidea(0) << std::endl;
    std::cout << "cat2 ideas[0] after: " << cat2.getbrain()->getidea(0) << std::endl;
    std::cout << "cat2 type: " << cat2.getType() << std::endl;

    Dog dog1;
    dog1.getbrain()->setbrain(1, "Sleep");

    Dog dog2(dog1);
    std::cout << "Dog1 ideas[1]: " << dog1.getbrain()->getidea(1) << std::endl;
    std::cout << "Dog2 ideas[1]: " << dog2.getbrain()->getidea(1) << std::endl;
    dog2.getbrain()->setbrain(101, "Play");
    std::cout << "Dog2 ideas[101]: " << dog2.getbrain()->getidea(101) << std::endl;

}

void    test_constructor_default()
{
    std::cout << "---------test constructor default -----------" << std::endl;
    Animal* p = new Cat();
    Animal* q = new Dog();

    delete p;
    delete q;
}

int main(void)
{
    test_polymorphisme();
    test_copy_constructor();
    test_constructor_default();
    return (0);
}
/*
1. makesound is virtual in Animal, so it will call makesound of DOG and cat 
2.if makesound is not virtual in animal, it will call makesound in animal

*/