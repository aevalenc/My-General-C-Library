# My-General-C-Library
My General C Library

This repository contains my library files written in C. This library contains some functions to do basic MATLAB like operations in C. Included in the repository is a makefile which compiles the source code. If the user wants to change the name of the library this can be done in the makefile. Note that this library is a dynamic one and the user needs to add the path where the .so file is located to their LD_LIBRARY_PATH. This way there are no issues when running your program.


Dependencies

* make
* stdio.h
* stdlib.h
* math.h


First you want to compile the dynamic library. This can be done with the makefile included.
```
make Mygclib
```

This will produce the .so file for dynamic linking. To use the library, in your "main" file you may have something like:

```

#include <Mygclib.h>

int main(){

  double x0 = 0.0, xf = 1.0, n = 5;
  int x[5];

  linspace(x, x0, xf, n);
  return 0;
}

```


Then you can compile and link in the following way:


```
gcc -c -I/path/to/Mygclib.h main.c
gcc -L/path/to/Mygclib.so main.o -o main
```

Assuming the path to the .so file has been added to your LD_LIBRARY_PATH enironment variable then you can execute your program

```
./main
```

