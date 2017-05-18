#
#  To sa opcje dla kompilacji
#
CPPFLAGS = -c -g -Iinc -Wall -pedantic

Testownik.out: obj/main.o obj/iTestowany.o obj/iZegar.o obj/Zegar.o obj/iDrzewo.o obj/Drzewo.o
	g++ -Wall -pedantic -o Testownik.out obj/main.o obj/iTestowany.o obj/iDrzewo.o obj/Drzewo.o obj/iZegar.o obj/Zegar.o

obj/main.o: src/main.cpp inc/iTestowany.hh inc/iZegar.hh inc/Zegar.hh inc/iDrzewo.hh inc/Drzewo.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/iTestowany.o: src/iTestowany.cpp inc/iTestowany.hh
	g++ ${CPPFLAGS} -o obj/iTestowany.o src/iTestowany.cpp

obj/iZegar.o: src/iZegar.cpp inc/iZegar.hh
	g++ ${CPPFLAGS} -o obj/iZegar.o src/iZegar.cpp

obj/Zegar.o: src/Zegar.cpp inc/Zegar.hh
	g++ ${CPPFLAGS} -o obj/Zegar.o src/Zegar.cpp

obj/iDrzewo.o: src/iDrzewo.cpp inc/iDrzewo.hh
	g++ ${CPPFLAGS} -o obj/iDrzewo.o src/iDrzewo.cpp

obj/Drzewo.o: src/Drzewo.cpp inc/Drzewo.hh
	g++ ${CPPFLAGS} -o obj/Drzewo.o src/Drzewo.cpp

clean:
	rm -f obj/*.o Testownik.out
