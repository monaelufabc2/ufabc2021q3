gcc -c Data.c
gcc -c Produto.c
gcc -c Tiquete.c
gcc -c Main.c
gcc Main.o Tiquete.o Produto.o Data.o -o App2.exe
rm -rf *.o