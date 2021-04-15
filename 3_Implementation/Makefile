main.exe: main.c src/foo.c
	gcc -Iinc ./src/foo.c ./min.c -o min.exe

run : main.exe
	./main.exe

clean: 
	rm *.exe

