#include<iostream>
#include"LibArr.h"

size_t LibArr::counter(size_t n) {
  this->n = n;
  arr = new int[n];
  for(size_t i{}; i<n; i++)
    arr[i]=i;
  for(size_t i{}; i<n; i++)
    mul += arr[i];
  return mul;
}


LibArr::~LibArr() {
 
}
