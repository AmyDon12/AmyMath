# Implementation Guidance for the AmyMath C++ library

#### Include the header your libraries

When using the library, the first step is to include it in your files along with the program
you will implement the library into

```cpp
//  main program (cpp)
#include "amymath.h"
```

#### How to use

To implement a function from the header, you use the struct name followed by a dot then the function's name.

```cpp
// example c++
#include "amymath.h"

int main() {
  
  double num = structname.function(parameter);
  
}
``` 
NB: make sure the library name is in quotation marks and not arrows

##### Example 

In the case of the cuboid.volume (volume of a cuboid) and cuboid.totalSURFACEAREA (total surface area of the sides of the cuboid) functions:

```cpp
#include "amymath.h"
#include <iostream>

int main() {

  std::cout << cuboid.volume(4, 5, 6);
  std::cout << cuboid.totalSURFACEAREA(4, 5, 6);
  
}
``` 

The first function calculates the volume of a cuboid with length 4, width 5 and height 6 (Output being 120) 
The second function calculates the total surface area of the same cuboid (Output: 148)
As defined in the function's syntax:

```cpp
struct {

  static int totalSURFACEAREA(double length, double breadth, double height) {
  return (2*(length*breadth))+(2*(length*height))+ (2*(height*breadth));
  }

  static int volume(double length, double breadth, double height) {
  return length * breadth * height;
  }

}  cuboid;
```

