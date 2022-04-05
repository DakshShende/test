main.exe: main.c src/plb.c
	gcc -Iinc ./src/plb.c ./main.c -o main.exe

run : main.exe
	./main.exe

clean: 
	rm *.exe
