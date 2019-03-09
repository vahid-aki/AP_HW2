CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = q3.o Old_data.o new_data.o
TARGET = q3


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
q3.o: q3.cpp
	$(CXX) $(CXXFLAGS) q3.cpp
Old_data.o: Old_data.cpp Old_data.h
	$(CXX) $(CXXFLAGS) Old_data.cpp
new_data.o: new_data.cpp new_data.h Old_data.h
	$(CXX) $(CXXFLAGS) new_data.cpp Old_data.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
