p1_justify: p1_justify.o p1_word.o p1_line.o
		gcc -o p1_justify p1_justify.o p1_word.o p1_line.o

p1_justify.o: p1_justify.c p1_line.h p1_word.h
		gcc -c p1_justify.c

p1_line.o: p1_line.c p1_line.h
		gcc -c p1_line.c

p1_word.o: p1_word.c p1_word.h
		gcc -c p1_word.c