FLAGS = -g

all: pattern

clean: 
	rm *.o ./pattern

clean_objects: 
	rm *.o

pattern: Client.o OX.o OY.o V10.o V11.o V12.o V20.o
	g++ Client.o OX.o OY.o V10.o V11.o V12.o V20.o -o pattern $(FLAGS) 
	make clean_objects

Client.o: Client.cc OX.h V20.h
	g++ -c Client.cc

OX.o: OX.cc OX.h O.h E1.h E2.h E21.h
	g++ -c OX.cc

OY.o: OY.cc OY.h O.h E1.h E2.h E22.h E3.h
	g++ -c OY.cc

V10.o: V10.cc V10.h V.h OX.h OY.h E1.h E3.h
	g++ -c V10.cc

V11.o: V11.cc V11.h V10.h
	g++ -c V11.cc

V12.o: V12.cc V12.h V10.h
	g++ -c V12.cc

V20.o: V20.cc V20.h V.h OX.h OY.h E1.h E3.h
	g++ -c V20.cc