CC = gcc -Wall -Wextra -Werror -std=c11

all: s21_string
	./s21_string 
#remove when finish!!!



s21_string: s21_string.o s21_string_funcs.o
	$(CC) $^ -o $@ 

s21_string.o: s21_string.c
	$(CC) -g -c $^ -o $@

s21_string_funcs.o: s21_string_funcs.c
	$(CC) -g -c $^ -o $@

# static lib

s21_string.a: s21_string_funcs.o
	ar rcs $@ $^

# test

test: tests/test.c s21_string_funcs.o
	$(CC) -lcheck -lm -lpthread $^ -o tests/$@
	tests/./test

tests/test.c: tests/*.check
	checkmk clean_mode=1 $^ > $@

#gcov

gcov_report: tests/test.c s21_string_funcs.o
	gcc -fprofile-arcs -ftest-coverage -lcheck -lm -lpthread $^ -o $@
	./gcov_report
	lcov --capture --directory . --output-file coverage.info
	genhtml coverage.info --output-directory out
	open out/index.html

clean:
	rm -rf s21_string *.o *.a tests/*.o tests/test tests/*.c gcov_report *.gcno *.gcda *.info out

rebuild: clean all

# check.h linux: -lcheck -lpthread -lrt -lsubunit

# clang-format -i *.c
# cppcheck --enable=all --suppress=missingIncludeSystem *.c 
