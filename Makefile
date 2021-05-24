## Author: Alejandro Valencia
## Projects: General C Library Makefile
## Update: 29 November, 2020

## []:Choose C compiler
CC := gcc

## []:Flags
CC_FLAGS := -c -fpic -Wall
LIB_NAME  := libMygclib
LIB_FLAGS := -shared -o


## []:List names of modules, subroutines, and functions
libnames := Mygclib


## []:Add suffixes
libsrcf := $(addsuffix .c, $(libnames))
libhdr  := $(addsuffix .h, $(libnames))
objects := $(addsuffix .o, $(libnames))


## Rules
$(LIB_NAME): $(objects) $(libdhr)
	$(CC) $(LIB_FLAGS) $(LIB_NAME).so $(objects) -lm

$(objects) : $(libsrcf) $(libhdr)
	$(CC) $(CC_FLAGS) $(libsrcf)


## Cleanup
clean :
	rm *.o *.so
