cc = g++
cflags = -W -g
target = Main

objects = main.o
$(target) : $(objects)
	$(cc) $(cflags) -o $(target) $(objects)

%.o : %.c
	$(cc) $(cflags) -c -o $@ $<


.PHONY : clean
clean:
	rm $(target) $(objects)
