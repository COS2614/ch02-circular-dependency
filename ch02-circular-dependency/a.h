#ifndef CLASSA_H
#define CLASSA_H

#include <iostream>
//#include "b.h"    // causes circular dependency

class ClassB;   // resolve circular dependency using forward declaration

class ClassA {
public:
    ClassA() {}
    ~ClassA() {}

    void doSomething(ClassB& b);
};

#endif // CLASSA_H
