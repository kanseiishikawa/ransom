CC = g++

main: main.o RSA.o ende_code_file.o

main.o: main.cpp
	$(CC) -c main.cpp

RSA.o: RSA.cpp
	$(CC) -c RSA.cpp

ende_code_file.o:
	$(CC) -c ende_code_file.cpp

clean:
