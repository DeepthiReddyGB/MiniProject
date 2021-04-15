main.exe: min.c src/foo.c
	gcc -Iinc ./src/foo.c ./min.c -o min.exe

run : min.exe
	./min.exe

clean: 
	rm *.exe