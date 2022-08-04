p4_remind: p4_remind.o p4_readline.o
	gcc -o p4_remind p4_remind.o p4_readline.o 

p4_remind.o: p4_remind.c p4_readline.h
	gcc -c p4_remind.c 

p4_readline.o: p4_readline.c p4_readline.h
	gcc -c p4_readline.c 