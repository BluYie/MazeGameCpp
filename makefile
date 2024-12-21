make: main.cpp board.cpp game.h
	g++ main.cpp board.cpp game.h -o main.exe
run: main.exe
	./main.exe