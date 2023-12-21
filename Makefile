obj-m += hello_mod.o

all:
	make -C /lib/modules/$(shell uname -r)/build modules

clean:
	make -C /lib/modules/$(shell uname -r)/build clean
