CC=g++
CFLAGS=-Wall -ansi -pedantic -std=c++17

EXECUTABLE=simpleDemo

SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)

# $@ - result file usually name of rule
# $< - first dependency of all dependencies of current rule
# $^ - all dependencies of rule

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean run

clean:
	rm -rfv *.o $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)
