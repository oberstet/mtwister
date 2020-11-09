build:
	gcc -Wall -c mtwister.c -o mtwister.o
	ar rcs libmtwister.a mtwister.o
	gcc -Wall test.c -o test -L. -lmtwister

test: build
	./test

clean:
	-rm -f ./*.o
	-rm -f ./*.a
	-rm -f ./test