#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat: public Animal
{
  public:
    Cat(std::string type = "Cat");
    Cat(const Cat& cat);
    virtual ~Cat();
    Cat& operator=(const Cat& cat);
    virtual void makeSound() const;
};

#endif
