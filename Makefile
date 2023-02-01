PROGNAME := main
PTURN := playerTurn
CF := commonFunc
DTURN := dealerTurn
SRCFILE := src
SRCS := $(wildcard $(SRCFILE)/$(PTURN)/*.c) $(wildcard $(SRCFILE)/$(DTURN)/*.c) $(wildcard $(SRCFILE)/$(CF)/*.c) $(wildcard $(SRCFILE)/*.c)
OBJS := $(patsubst %.c,%.o,$(SRCS))

CC = gcc
CFLAGS = -Wall -O2

.SUFFIXES: .c.o

# プログラムの生成ルール
$(PROGNAME): $(OBJS)
	$(CC) -o main.exe $(OBJS) $^

$(warning objs = $(OBJS))