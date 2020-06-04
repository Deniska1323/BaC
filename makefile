.PHONY: all format clean run test install

FLAGS := -std=c++11

all:bin/BaC    bin/testing

bin/BaC: build/src/main.o build/src/menu.o build/src/randomizer.o build/src/input.o build/src/logic.o build/src/incorrect_input.o
	g++ -Wall -Werror build/src/main.o build/src/menu.o build/src/randomizer.o build/src/input.o build/src/logic.o build/src/incorrect_input.o -o bin/BaC  -lncurses

bin/testing:  build/test/testing.o build/src/menu.o build/src/randomizer.o build/src/input.o build/src/logic.o build/src/incorrect_input.o
	g++ -Wall -Werror build/test/testing.o build/src/menu.o build/src/randomizer.o build/src/input.o build/src/logic.o build/src/incorrect_input.o -o bin/testing  -lncurses  

build/test/testing.o: test/testing.cpp thirdparty/catch.hpp 
	clang-format -i test/testing.cpp
	g++ -I thirdparty -I src -c test/testing.cpp -o build/test/testing.o $(FLAGS)


build/src/main.o: src/main.cpp 
	clang-format -i src/main.cpp
	g++ -Wall -Werror -I src -c src/main.cpp -o build/src/main.o -lncurses $(FLAGS)

build/src/menu.o: src/menu.cpp
	clang-format -i src/menu.cpp
	g++ -Wall -Werror -I src -c src/menu.cpp -o build/src/menu.o -lncurses $(FLAGS)
	
build/src/randomizer.o: src/randomizer.cpp
	clang-format -i src/randomizer.cpp
	g++ -Wall -Werror -I src -c src/randomizer.cpp -o build/src/randomizer.o -lncurses $(FLAGS)

build/src/incorrect_input.o: src/incorrect_input.cpp
	clang-format -i src/incorrect_input.cpp
	g++ -Wall -Werror -I src -c src/incorrect_input.cpp -o build/src/incorrect_input.o -lncurses $(FLAGS)
	 
build/src/input.o: src/input.cpp
	clang-format -i src/input.cpp
	g++ -Wall -Werror -I src -c src/input.cpp -o build/src/input.o -lncurses $(FLAGS)

build/src/logic.o: src/logic.cpp
	clang-format -i src/logic.cpp
	g++ -Wall -Werror -I src -c src/logic.cpp -o build/src/logic.o -lncurses $(FLAGS)

format: src/input.cpp src/input.hpp src/menu.cpp src/menu.hpp src/main.cpp src/randomizer.cpp src/randomizer.hpp src/incorrect_input.cpp src/incorrect_input.hpp test/testing.cpp

run:
	bin/BaC

test_run:
	bin/testing

clean:
	rm -rf build/src/*.o build/test/*.o bin/BaC

install:
	sudo apt-get install libncurses5-dev libncursesw5-dev
	sudo apt-get install libsqlite3-dev

	


