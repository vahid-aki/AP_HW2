CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = q2.o LibArr.o LibVec.o
TARGET = q2


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
q2.o: q2.cpp
	$(CXX) $(CXXFLAGS) q2.cpp
LibArr.o: LibArr.cpp LibArr.h
	$(CXX) $(CXXFLAGS) LibArr.cpp
LibVec.o: LibVec.cpp LibVec.h
	$(CXX) $(CXXFLAGS) LibVec.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
