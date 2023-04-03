#ifndef CLASSA_H
#define CLASSA_H

#include <iostream>
#include "b.h"

class ClassA {
public:
    ClassA() {}
    ~ClassA() {}

    void doSomething(ClassB& b);
};

#endif // CLASSA_H
