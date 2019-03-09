#include<iostream>
#include"LibArr.h"
#include"LibVec.h"
#include<chrono>
#include <algorithm>

using namespace std::chrono;

double runTime (auto ptfptr, auto object, size_t n);

int main () {
  
  //double time{};

  // declare a pointer to member function
  size_t (LibArr::* ptfptr) (size_t) = &LibArr::counter;

   size_t (LibVec::* ptfptr1) (size_t) = &LibVec::counter;

  // create an object of class type X
   LibArr arrobject;
   LibVec vecobject;

   for(size_t n{1}; n!= 10000000 ; n*=10)
     {
   
       std::cout << runTime(ptfptr, arrobject, n)  << " microseconds for array" << std::endl;

       std::cout << runTime(ptfptr1, vecobject, n)  << " microseconds for vector" << std::endl;

     }
   
  return 0;
}


double runTime (auto ptfptr, auto object, size_t n) {

  auto start = high_resolution_clock::now();

  std::cout << "mul is:  " << (object.*ptfptr) (n) << "           ";
 
  
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  return duration.count();
}
