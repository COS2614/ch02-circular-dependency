# ch02-circular-dependency
## Provides an example of a circular dependency and how to resolve it using forward declaration

In this example, **ClassA** depends on **ClassB** and vice versa, leading to a circular dependency. To resolve this, we use **forward declarations** in the header files **a.h** and **b.h** to tell the compiler that these classes will be defined later. This allows us to include the headers in the source files **a.cpp** and **b.cpp** where the full definitions of the classes are needed. The main program then includes both headers to use the classes without issue.
