#ifndef CLASSB_H
#define CLASSB_H

#include <iostream>
#include "a.h"

class ClassB {
public:
    ClassB() {}
    ~ClassB() {}

    void doSomething(ClassA& a);
};

#endif // CLASSB_H
