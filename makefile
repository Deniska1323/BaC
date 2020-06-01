all:bin/BaC

bin/BaC: build/src/main.o build/src/menu.o build/src/randomizer.o build/src/input.o 
	g++ -Wall -Werror build/src/main.o build/src/menu.o build/src/randomizer.o build/src/input.o  -o bin/BaC

build/src/main.o: src/main.cpp 
	clang-format -i src/main.cpp
	g++ -Wall -Werror -I src -c src/main.cpp -o build/src/main.o

build/src/menu.o: src/menu.cpp
	clang-format -i src/menu.cpp
	g++ -Wall -Werror -I src -c src/menu.cpp -o build/src/menu.o
	
build/src/randomizer.o: src/randomizer.cpp
	clang-format -i src/randomizer.cpp
	g++ -Wall -Werror -I src -c src/randomizer.cpp -o build/src/randomizer.o
	
build/src/input.o: src/input.cpp
	clang-format -i src/input.cpp
	g++ -Wall -Werror -I src -c src/input.cpp -o build/src/input.o

format: src/input.cpp src/input.hpp src/menu.cpp src/menu.hpp src/main.cpp src/randomizer.cpp src/randomizer.hpp
	clang-format -i src/input.cpp src/menu.cpp src/main.cpp src/randomizer.cpp


clean:
	rm -rf build/src/*.o build/test/*.o bin/BaC 
