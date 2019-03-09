#include<iostream>
#include"Map.h"

int main() {
  size_t N{};
  std::cout << "enter the number of row(column): ";
  std::cin >> N;
  Map map1{N};
  map1.showMap();
  map1.findRoute_simple();
  map1.showRoute_simple();
  map1.findRoute();
  map1.showRoute();
  return 0;
}
