#Este es el archivo de makefile para archivos.c

archivos.exe: archivos.o funArchivos.o
	gcc archivos.o funArchivos.o -o archivos.exe
funArchivos.o: funArchivos.c defArchivos.h
	gcc -c funArchivos.c
archivos.o: archivos.c defArchivos.h
	gcc -c archivos.c
clean:
	rm *.o *.txt *.bin

