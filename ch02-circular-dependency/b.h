#ifndef CLASSB_H
#define CLASSB_H

#include <iostream>
//#include "a.h"    // causes circular dependency
class ClassA;    // resolve circular dependency using forward declaration

class ClassB {
public:
    ClassB() {}
    ~ClassB() {}

    void doSomething(ClassA& a);
};

#endif // CLASSB_H
