all:
	g++ -Wall -o ./bin/main ./src/*.cpp

run:
	mv ./res ./resource
	./bin/main
	mv ./resource ./res

all.run:
	mv ./res ./resource
	g++ -Wall -o ./bin/main ./src/*.cpp
	./main
	mv ./resource ./res

