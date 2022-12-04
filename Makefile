all:
	gcc -std=c99 -Wall -Wextra transmissionerr.c lab4.c -o lab4

clean:
	rm -f *.o lab4
