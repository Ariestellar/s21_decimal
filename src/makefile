CC = gcc -Wall -Wextra -Werror -std=c11 -g
GCOVFLAGS = -L. --coverage
TEST_DIR = s21_tests
LDFLAGS = -lcheck -lm -lpthread -lrt -lsubunit -lgmp

all: clean s21_decimal.a

s21_decimal.a:
	$(CC) s21_decimal.c s21_support_function.c s21_arithmetic.c -c
	ar r s21_decimal.a *.o
	ranlib s21_decimal.a
	rm *.o

test: s21_decimal.a
	$(CC) -c $(TEST_DIR)/*.c
	ar rc s21_test_main.a test_*.o
	ranlib s21_test_main.a
	rm *.o
	$(CC) $(GCOVFLAGS) s21_decimal.c s21_arithmetic.c s21_support_function.c s21_decimal.a s21_test_main.a -o test_file $(LDFLAGS)
	./test_file

gcov_report: clean test
	lcov -o tests.info -c -d .	
	genhtml -o report tests.info
	make clean

val: clean s21_decimal.a
	gcc $(FLAGS) $(TEST_DIR)/*.c s21_decimal.a -o s21_test ${LDFLAGS}
	valgrind --tool=memcheck --leak-check=yes --log-file=val_log.log ./s21_test

check_style:
	cp ../materials/linters/.clang-format ../src/
	clang-format -n *.c *.h
	clang-format -n s21_tests/*.c s21_tests/*.h
	rm .clang-format
	cppcheck --enable=all --suppress=missingIncludeSystem *.c

set_style:
	cp ../materials/linters/.clang-format ../src/
	clang-format -i *.c *.h
	clang-format -i s21_tests/*.c s21_tests/*.h
	rm .clang-format

clean:
	rm -rf *.o *.a *.gch *.gcno *.gcna *.gcda *.info *.out *.log tests s21_test test_file test_html s21_test_main report