#include "b.h"
#include "a.h"

void ClassB::doSomething(ClassA& a) {
    std::cout << "ClassB::doSomething() called" << std::endl;
    a.doSomething(*this);
}
