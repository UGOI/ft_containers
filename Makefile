# Compiler settings.
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
LDFLAGS =

# Makefile settings.
APPNAME = a.out
EXT = .cpp
LIBEXT = .a
SRCDIR = src
OBJDIR = obj
SRC := $(shell find $(SRCDIR) -name '*.cpp')
# SRC := 
OBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)

# $(info VAR="$(SRC)")

RM = rm -f
DELOBJ = $(OBJ)

all: $(APPNAME)

# Builds the app
$(APPNAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

# Building rule for .o files and its .c
$(OBJDIR)/%.o: $(SRCDIR)/%$(EXT)
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

# Rules
.PHONY: clean
clean:
	$(RM) $(DELOBJ)

.PHONY: fclean
fclean: clean
	@$(RM) $(APPNAME)
.PHONY: re
re:	fclean all

debug: CFLAGS += -g -fsanitize=thread
debug: re
.PHONY: debug