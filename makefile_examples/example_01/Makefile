# A basic makefile showing the full compilation process of gcc, and the shorthand version
#
# (Note: there are errors using 'full' on Mac OSX using clang, will produce output gcc on
# in Linux (Debian) but output file repeats hello world )

full:
# 	compile the preprocess instructions (#include and #defines)
	cpp hello_world.c > hello_world.i
# compile into assembly code
	gcc -S hello_world.i
# compile into machine code
	as -o hello_world.o hello_world.s
# link the object code with the library code
	ld -o hello_world hello_world.o -lc

short:
# displays -v (verbose) to show detailed output
	gcc -v -o hello_world hello_world.c

clean:
	rm -rf *.i
	rm -rf *.s
	rm -rf *.o
	rm -rf hello_world
