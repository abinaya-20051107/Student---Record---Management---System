
outfile: main.o add.o display.o delete.o modify.o save.o sort.o
	cc main.o add.o display.o delete.o modify.o save.o sort.o -o student

main.o: main.c
	cc -c main.c

add.o: add.c
	cc -c add.c

display.o: display.c
	cc -c display.c

delete.o: delete.c
	cc -c delete.c

modify.o: modify.c
	cc -c modify.c

save.o: save.c
	cc -c save.c

sort.o: sort.c
	cc -c sort.c

