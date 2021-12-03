all: Main.o Data.o Produto.o Tiquete.o
	gcc Main.o Data.o Produto.o Tiquete.o -o App.exe

Main.o: Data.o Produto.o Tiquete.o
	gcc -c Main.c

Tiquete.o: Tiquete.h Data.o Produto.o
	gcc -c Tiquete.c

Produto.o: Produto.h
	gcc -c Produto.c

Data.o:	Data.h
	gcc -c Data.c

clear:
	rm -rf *.o

execute:
	./App.exe