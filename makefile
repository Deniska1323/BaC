all:bin/BaC

bin/BaC: build/src/main.o 
	g++ -Wall -Werror build/src/main.o  -o bin/BaC

build/src/printF.o: src/printF.c
	gcc -Wall -Werror -I src -c src/printF.c -o build/src/printF.o
