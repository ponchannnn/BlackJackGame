PROGNAME := main

SRCFILE := src
SRCS := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SRCS))

CC = gcc
CFLAGS = -Wall -O2

.SUFFIXES: .c.o

# プログラムの生成ルール
$(PROGNAME): $(OBJS)
	$(CC) -o BlackJackGameEx.exe $(OBJS) $^

$(warning objs = $(OBJS))