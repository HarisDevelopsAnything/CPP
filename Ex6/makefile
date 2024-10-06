output: imp.o app.o 
	g++ imp.o app.o -o output
imp.o: imp.cpp header.h
	g++ -c imp.cpp
app.o: app.cpp header.h
	g++ -c app.cpp