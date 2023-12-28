GCC			= gcc
FLAGS		= -Wall -Werror -Wextra
TEST_LIBS	= -lcheck -lm -lsubunit -lpthread
OBJECT		= s21_math.o
SOURSES		= s21_math.c
ARCHIVE		= s21_math.a

all: clean build

clean:
	rm -rf *.o *.a test
	
build:
	$(GCC) $(FLAGS) -c -o $(OBJECT) $(SOURSES)
	ar rcs $(ARCHIVE) $(OBJECT)

test:
	$(GCC) -c test_s21_math.c -o test.o
	$(GCC) test.o s21_math.a $(TEST_LIBS) -o test