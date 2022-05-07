#this is makefile
run: main.o calc.o
    gcc main.o calc.o -o target_bin
main.o: main.c calc.h
    gcc -I . -c main.c
calc.o: calc.c calc.h
    gcc -I . -c calc.c
clean:
    rm -rf *.o
    rm target_bin

# gcc  Sources/main.c Sources/calc.c Headers/calc.h -o run
# gcc  Sources/main.c Sources/convert.c Headers/convert.h -o run
# gcc  Sources/main.c Sources/m_string.c Headers/m_string.h -o run