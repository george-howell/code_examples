# Code Examples

A number of coding examples in C, Python, Makefiles and CMake. The Wiki also provides useful information for each language, cheatsheets and Git commands.

## C Examples
A collection of examples of standard functions / arguments / pre-processor values in C.

### Preprocessor
The preprocessor is documented fully at [GGC / GNU Preprocessor Manual](https://gcc.gnu.org/onlinedocs/cpp/)

### Pointers
A selection of examples using single pointers and pointer to pointers.

### Arrays
A selection of examples using arrays and multidimensional arrays.

### Assert
Basic usage of the assert library.

### FFTW3
An example of FFT and IFFT using the FFTW3 library.

## Makefile Examples

A collection of makefile examples

### Info

[GNU Make Manual](https://www.gnu.org/software/make/manual/make.html)

[GNU GCC & Make Examples - NTU Singapore](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)

### Examples

#### example_01
A basic makefile showing the full compilation process of gcc, and the shorthand version

(Note: there are errors using 'full' on Mac OSX using clang, will produce output gcc on in Linux (Debian) but output file repeats hello world )

#### example_02
Shows target: prequisites relationship. In this example, by calling 'make' or 'make all',
make will first look to see if hello.out is present, as it isn't then it will try to
make the next target hello.exe, and look for the prequisite hello.o. As this is not here,
then make will try to make the next target and look for the prequisite hello.c which is
avaliable. It will then run the program 'gcc -c hello.c', before running through the 
previous targets to create the full .out file

#### example_03
More advanced version of a makefile, taken from the Eclipse documentation.

#### example_04
As above, but where the header and source files are in different folders.
