CFLAGS = -c -Wall -Werror -Wextra -std=c11
LDFLAGS = -Wall -Werror -Wextra -std=c11
SOURCE = s21_*.c

all: install gcov_report

install: uninstall
	mkdir SmartCalc
	cd SmartCalc && cmake -B build "../untitled1" && make -C build untitled1
	cp -R SmartCalc/build/untitled1.app ~/Desktop

uninstall:
	rm -rf SmartCalc ~/Desktop/untitled1.app

dvi:
	open ../README_RUS.md

dist: uninstall install
	mkdir archiv
	@cp -r s21_tools Makefile s21_smartcalc.c s21_smartcalc.h ../untitled1 archiv
	@tar -cf s21_smartcalc.tar archiv
	rm -rf archiv

test: clean 
	gcc $(LDFLAGS) -o test test.c s21_tools/*.c s21_smartcalc.c -lcheck
	./test

gcov_report:
	gcc --coverage -o test test.c s21_tools/*.c s21_smartcalc.c -lcheck
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open ./report/index.html
	rm -rf *.gcno *.gcda *.info test

install_brew:
	git clone https://github.com/Homebrew/brew ~/goinfre/homebrew
	eval "$(goinfre/homebrew/bin/brew shellenv)"

install_lcov:
	brew install lcov
	
clang:
	cp ../materials/linters/.clang-format .clang-format
	cp ../materials/linters/.clang-format s21_tools/.clang-format
	clang-format -i *.c *.h s21_tools/*.c
	rm -rf .clang-format
	rm -rf s21_tools/.clang-format

clang_review:
	cp ../materials/linters/.clang-format .clang-format
	cp ../materials/linters/.clang-format s21_tools/.clang-format
	clang-format -n *.c *.h s21_tools/*.c
	rm -rf .clang-format
	rm -rf s21_tools/.clang-format

clean:
	rm -rf calc *.o s21_smartcalc.tar archiv SmartCalc ~/Desktop/Calc.app report