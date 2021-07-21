CC = g++
INCLUDEFLAGS = -I../include
OUTFLAGS = -o ./
FLAGS = -std=c++17

all: 
	${CC} -c ../lib/Product.cpp 		${INCLUDEFLAGS} ${FLAGS} ${OUTFLAGS}Product.o
	${CC} -c ../lib/ProductFactory.cpp  ${INCLUDEFLAGS} ${FLAGS} ${OUTFLAGS}ProductFactory.o
	${CC} -c ../lib/Apple.cpp 			${INCLUDEFLAGS} ${FLAGS} ${OUTFLAGS}Apple.o
	${CC} -c ../lib/Orange.cpp 			${INCLUDEFLAGS} ${FLAGS} ${OUTFLAGS}Orange.o
	${CC} -c ../main.cpp 				${INCLUDEFLAGS} ${FLAGS} ${OUTFLAGS}main.o
	${CC} *.o  ${FLAGS} ${OUTFLAGS}factorymethod

clean:
	rm *.o
