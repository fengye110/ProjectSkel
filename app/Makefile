CC = gcc
LNK = link

INC = ../inc
LIBDIR = ../lib
TARGET = sample
LIBDIR = ../lib
LIBS = -L$(LIBDIR) -laud

CPPFLAGS = -g -Wall -I $(INC) 
.PHONY : clean 

$(TARGET): main.c
	$(CC) -o $@ $^ $(CPPFLAGS) $(LIBS) 



clean:
	$(RM) *.o $(TARGET)


