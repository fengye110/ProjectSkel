CC = gcc
AR = ar
RANLIB = ranlib


INC = ../inc
#VPATH = $(INC)
TARGET = libaud.a

CPPFLAGS = -g -Wall -I $(INC)

$(TARGET): audlib.o $(INC)/audlib.h
	$(AR) rc $@ $^
	$(RANLIB) $@

clean:
	$(RM) *.o $(TARGET)


