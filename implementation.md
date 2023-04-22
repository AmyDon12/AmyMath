# Implementation Guidance
## for the AmyMath C++ library

### 1. Include the header your libraries

When using the library, the first step is to include it in your files along with the program
you will implement the library into

```cpp
//  main program (cpp)
#include "amymath.h"
```

### How to use

There are no namespaces to involve you simply just type the function as defined in the source
for example 

```cpp
// example c++
#include "amymath.h"

int main() {
  
  double num = function(paramaters);
  
}
``` 
NB: make sure the library name is in quotation marks and not arrows

### Example 

In the case of the cubdVOL function (Cuboid Volume calculator):
```cpp
#include "amymath.h"
#include <iostream>

int main() {

  std::cout << cubdVOL(4, 5, 6);
  
}
``` 

This calculates the volume of a cuboid with length 4, width 5 and height 6 (Output being 120)
As defined in the function's syntax:

```cpp
//  amymath.h
static int cubdVOL(double length, double breadth, double height)
```


