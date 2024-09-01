all:program clean blabla run

program: fonctions.o main.o
		gcc -o program main.o fonctions.o

fonctions.o: fonctions.c fonctions.h
		gcc -Wall -W -c fonctions.c -o fonctions.o

main.o: main.c fonctions.h
		gcc -Wall -W -c main.c -o main.o

clean:
		rm -rf *.o

blabla: 
		echo "compilation terminee"

run: program
		@./program

sudoclean: clean
		rm -rf program



