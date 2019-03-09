CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = q1.o Map.o
TARGET = q1


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
q1.o: q1.cpp
	$(CXX) $(CXXFLAGS) q1.cpp
Map.o: Map.cpp Map.h
	$(CXX) $(CXXFLAGS) Map.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
