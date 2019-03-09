#include<iostream>
#include"LibVec.h"

size_t LibVec::counter(size_t n) {
  this->n = n;
  arr = new int[n];
  for(size_t i{}; i<n; i++)
    arr[i]=i;
  for(size_t i{}; i<n; i++)
    mul += arr[i];
  return mul;
}


LibVec::~LibVec() {
 
}
