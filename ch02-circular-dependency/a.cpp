#include "a.h"
#include "b.h"

void ClassA::doSomething(ClassB& b) {
    std::cout << "ClassA::doSomething() called" << std::endl;
    b.doSomething(*this);
}
