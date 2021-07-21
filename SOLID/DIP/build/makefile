CC = g++
INCLUDEFLAGS = -I../include
OUTFLAGS = -o ./
FLAGS = -std=c++17

all: 
	${CC} -c ../lib/Person.cpp					${INCLUDEFLAGS} ${FLAGS} ${OUTFLAGS}Person.o
	${CC} -c ../lib/RelationshipManager.cpp		${INCLUDEFLAGS} ${FLAGS} ${OUTFLAGS}RelationshipManager.o
	${CC} -c ../main.cpp						${INCLUDEFLAGS} ${FLAGS} ${OUTFLAGS}main.o
	${CC} *.o									${FLAGS} ${OUTFLAGS}relationmapper

clean:
	rm *.o
