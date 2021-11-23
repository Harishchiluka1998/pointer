C=gcc
final:function.o swap.o
	$(CC) $^ -o $@
%.o:%.c
	 $(CC) -c $<
clean:
	rm -f *.o final
