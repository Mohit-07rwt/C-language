CC = cc
target = student_linked_list.o reverse.o print.o savefile.o delete.o add.o count.o modify.o sorting.o generate.o dublicate.o

exe: $(target)
	$(CC) $(target) -o exe

student_linked_list.o: student_linked_list.c
	$(CC) -c student_linked_list.c

print.o: print.c
	$(CC) -c print.c

savefile.o: savefile.c
	$(CC) -c savefile.c

delete.o: delete.c
	$(CC) -c delete.c

add.o: add.c
	$(CC) -c add.c

count.o: count.c
	$(CC) -c count.c

modify.o: modify.c
	$(CC) -c modify.c

sorting.o: sorting.c
	$(CC) -c sorting.c

generate.o: generate.c
	$(CC) -c generate.c

reverse.o: reverse.c
	$(CC) -c reverse.c

dublicate.o: dublicate.c
	$(CC) -c dublicate.c

clean:
	@echo "cleaning up..."
	rm -f *.o exe
