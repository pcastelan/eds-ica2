all: pilha.o hanoi.o
	gcc -o hanoi *.o
		
pilha.o: pilha.c
	gcc -c pilha.c
		
hanoi.o: hanoi.c
	gcc -c hanoi.c
		
clean:
	rm -f *.o hanoi
