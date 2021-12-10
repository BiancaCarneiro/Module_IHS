obj-m = atv.o
KVERSION = $(shell uname -r)
CC = gcc

all:
	make -C /lib/modules/$(KVERSION)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(KVERSION)/build M=$(PWD) clean

