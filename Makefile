.c.o:
	gcc -fPIC -c $<

all: Dll.o TestSorting.o
	gcc -shared Dll.o -o libDll.dll
	gcc TestSorting.o -L. libDll.dll -o TestSorting
	LD_LIBRARY_PATH=. ./TestSorting
