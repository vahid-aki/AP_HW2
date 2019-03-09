#ifndef MAP_H
#define MAP_H
#include<iostream>
#include<vector>

class Map { 
 public:
  Map(size_t N);
  ~Map();

  void showMap();
  void findRoute();
  void showRoute();
  void findRoute_simple();
  void showRoute_simple();
  
 private:
  int mul{};
  size_t i{};
  size_t j{};
  size_t n{};
  int** arr{new int*[n]};
  char** arrstar{new char*[n]};
  std::vector<int> vec{};
};

#endif
