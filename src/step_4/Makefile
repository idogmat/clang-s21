GCC = gcc
FLAGS = -Wall -Werror -Wextra
RESULT = test
SOURSES = create_array.c main.c 

all: clean build

clean:
	rm -rf test
	
build:
	$(GCC) $(FLAGS) -o $(RESULT) $(SOURSES)
