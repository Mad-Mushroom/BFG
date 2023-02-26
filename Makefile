all:
	g++ -Wall -o ./bin/main ./src/*.cpp

run:
	./bin/main

all.run:
	g++ -Wall -o ./bin/main ./src/*.cpp
	./main
