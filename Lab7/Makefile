#
#  To sa opcje dla kompilacji
#
CPPFLAGS = -c -g -Iinc -Wall -pedantic

Testownik.out: obj/main.o obj/iTestowany.o obj/iZegar.o obj/Zegar.o obj/iTablicaAso.o obj/TablicaAso.o
	g++ -Wall -pedantic -o Testownik.out obj/main.o obj/iTestowany.o obj/iTablicaAso.o obj/TablicaAso.o obj/iZegar.o obj/Zegar.o

obj/main.o: src/main.cpp inc/iTestowany.hh inc/iZegar.hh inc/Zegar.hh inc/iTablicaAso.hh inc/TablicaAso.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/iTestowany.o: src/iTestowany.cpp inc/iTestowany.hh
	g++ ${CPPFLAGS} -o obj/iTestowany.o src/iTestowany.cpp

obj/iZegar.o: src/iZegar.cpp inc/iZegar.hh
	g++ ${CPPFLAGS} -o obj/iZegar.o src/iZegar.cpp

obj/Zegar.o: src/Zegar.cpp inc/Zegar.hh
	g++ ${CPPFLAGS} -o obj/Zegar.o src/Zegar.cpp

obj/iTablicaAso.o: src/iTablicaAso.cpp inc/iTablicaAso.hh
	g++ ${CPPFLAGS} -o obj/iTablicaAso.o src/iTablicaAso.cpp

obj/TablicaAso.o: src/TablicaAso.cpp inc/TablicaAso.hh
	g++ ${CPPFLAGS} -o obj/TablicaAso.o src/TablicaAso.cpp

clean:
	rm -f obj/*.o Testownik.out
