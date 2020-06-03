.PHONY: all format clean run test

all:bin/BaC
bin/BaC: build/src/main.o build/src/menu.o build/src/randomizer.o build/src/input.o build/src/logic.o build/src/incorrect_input.o
	g++ -Wall -Werror build/src/main.o build/src/menu.o build/src/randomizer.o build/src/input.o build/src/logic.o build/src/incorrect_input.o -o bin/BaC  -lncurses

build/src/main.o: src/main.cpp 
	clang-format -i src/main.cpp
	g++ -Wall -Werror -I src -c src/main.cpp -o build/src/main.o -lncurses

build/src/menu.o: src/menu.cpp
	clang-format -i src/menu.cpp
	g++ -Wall -Werror -I src -c src/menu.cpp -o build/src/menu.o -lncurses
	
build/src/randomizer.o: src/randomizer.cpp
	clang-format -i src/randomizer.cpp
	g++ -Wall -Werror -I src -c src/randomizer.cpp -o build/src/randomizer.o -lncurses

build/src/incorrect_input.o: src/incorrect_input.cpp
	clang-format -i src/incorrect_input.cpp
	g++ -Wall -Werror -I src -c src/incorrect_input.cpp -o build/src/incorrect_input.o -lncurses
	
build/src/input.o: src/input.cpp
	clang-format -i src/input.cpp
	g++ -Wall -Werror -I src -c src/input.cpp -o build/src/input.o -lncurses

build/src/logic.o: src/logic.cpp
	clang-format -i src/logic.cpp
	g++ -Wall -Werror -I src -c src/logic.cpp -o build/src/logic.o -lncurses

format: src/input.cpp src/input.hpp src/menu.cpp src/menu.hpp src/main.cpp src/randomizer.cpp src/randomizer.hpp src/incorrect_input.cpp src/incorrect_input.hpp
	clang-format -i src/input.cpp src/menu.cpp src/main.cpp src/randomizer.cpp src/incorrect_input.cpp

run:
	bin/BaC

clean:
	rm -rf build/src/*.o build/test/*.o bin/BaC

install:
	sudo apt-get install libncurses5-dev libncursesw5-dev
	sudo apt-get install libsqlite3-dev

	


