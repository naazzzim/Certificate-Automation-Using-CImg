all:
	g++ -Wall -o index index.cpp     -lpthread -lX11
	./index