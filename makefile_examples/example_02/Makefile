# Shows target: prequisites relationship. In this example, by calling 'make' or 'make all',
# make will first look to see if hello.out is present, as it isn't then it will try to
# make the next target hello.exe, and look for the prequisite hello.o. As this is not here,
# then make will try to make the next target and look for the prequisite hello.c which is
# avaliable. It will then run the program 'gcc -c hello.c', before running through the 
# previous targets to create the full .out file

all: hello

hello.exe: hello.o
	 gcc -o hello hello.o

hello.o: hello.c
	 gcc -c hello.c

clean:
	 rm hello.o hello
