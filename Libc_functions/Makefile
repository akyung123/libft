CC = cc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)
HEADERS = libft.h
INCLUDES= -I.

TARGET = libft.a

.PHONY: all
all : $(TARGET)

$(TARGET): $(OBJS)
	@ar rcs $(TARGET) $(OBJS)

.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(TARGET)

.PHONY: re
re: fclean all
