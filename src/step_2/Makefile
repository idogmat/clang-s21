GCC = gcc
FLAGS = -Wall -Werror -Wextra
RESULT = test
SOURSES = string_size.c array_size.c main.c 

all: clean build

clean:
	rm -rf test
	
build:
	$(GCC) $(FLAGS) -o $(RESULT) $(SOURSES)
