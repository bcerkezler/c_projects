e1_justify: e1_justify.o e1_word.o e1_line.o
		gcc -o e1_justify e1_justify.o e1_word.o e1_line.o

e1_justify.o: e1_justify.c e1_line.h e1_word.h
		gcc -c e1_justify.c

e1_line.o: e1_line.c e1_line.h
		gcc -c e1_line.c

e1_word.o: e1_word.c e1_word.h
		gcc -c e1_word.c