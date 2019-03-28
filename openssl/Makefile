CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp File.cpp Hash.cpp PrivateKey.cpp Runner.cpp Signature.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=sigutil

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ -lssl -lcrypto

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@ -lssl -lcrypto 

clean:
	rm -rf *.o sigutil