p2_justify: p2_justify.o p2_word.o p2_line.o
		gcc -o p2_justify p2_justify.o p2_word.o p2_line.o

p2_justify.o: p2_justify.c p2_line.h p2_word.h
		gcc -c p2_justify.c

p2_line.o: p2_line.c p2_line.h
		gcc -c p2_line.c

p2_word.o: p2_word.c p2_word.h
		gcc -c p2_word.c